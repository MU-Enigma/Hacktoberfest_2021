/*
	Author: Gurram Siddarth Reddy
	Date: 29-08-2021
	Program to sort an array using multi-threaded merge sort
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<omp.h>

#define int long long int


// lol end of 110+ lines of code just to sort an array
// I wanted to learn multi-threading and parallel programming
// so I wrote this program 
// I hope you enjoy it and find it useful


int merge(int *array, int low, int mid, int high)
{
	int i, j, k;
	int *left = (int *)malloc(sizeof(int) * (mid - low + 1));
	int *right = (int *)malloc(sizeof(int) * (high - mid));
	for(i = 0; i < mid - low + 1; i++)
		left[i] = array[low + i];
	for(j = 0; j < high - mid; j++)
		right[j] = array[mid + j + 1];
	i = 0;
	j = 0;
	k = low;
	while(i < mid - low + 1 && j < high - mid)
	{
		if(left[i] <= right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
	}
	while(i < mid - low + 1)
		array[k++] = left[i++];
	while(j < high - mid)
		array[k++] = right[j++];
	free(left);
	free(right);
}

void merge_sort(int *array, int l, int r)
{
	if(l < r)
	{
		int m = (l + r) / 2;
		#pragma omp task firstprivate(array, l, m)
		{
			merge_sort(array, l, m);
		}
		#pragma omp task firstprivate(array, l, m)
		{
			merge_sort(array, m + 1, r);
		}

		#pragma omp taskwait
		merge(array, l, m, r);
	}
}

int* get_rand_array(int size, int* arr)
{

	for(int i = 0; i < size; i++)
		arr[i] = rand()%1000000;
	return arr;
}

int main(int argc, char **argv){
	// taking input from user in command line
	{
	if(argc != 2)
	{
		printf("Incorrect number of arguments! Please go through README.md\n");
		return -1;
	}

	for(int j = 0; j < strlen(argv[1]); j++)
		if(!isdigit(argv[1][j]))
		{
			printf("Invalid arguments! Please go through README.md"); // Enter only numbers!
			return -1;
		}
	}
	// Array size taken in from command line
	const int size = atoi(argv[1]);

	int arr[size];
	
	double start = omp_get_wtime();
	get_rand_array(size,arr); // Generate random array
	double end = omp_get_wtime();
	double array_gen_time = end - start;

	// Start timer
	start = omp_get_wtime();

	for(int i = 0; i < size; i++)
		printf("%lld ", arr[i]);
	printf("\n");

   #pragma omp parallel
	{
		#pragma omp single
		{
			merge_sort(arr, 0, size - 1);
		}
	}

	for(int i = 0; i < size; i++)
		printf("%lld ", arr[i]);
	printf("\n");

	// End timer
	end = omp_get_wtime();
	printf("Time taken to generate array: %lf\n", array_gen_time);
	printf("Time taken: %fs\n", end - start);

	return 0;
}