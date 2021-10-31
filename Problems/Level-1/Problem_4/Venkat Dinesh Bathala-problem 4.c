/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
     int day;
     int hr;
     int min;
     int sec;
    day=n/86400;
    n=n%86400;
    hr=n/3600;   
    n=n%3600;
    min=n/60; 
    n=n%60;  
    printf("%d day, %d hr, %d min, %d sec", day,hr,min,n);
}