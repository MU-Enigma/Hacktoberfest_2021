#include<stdio.h>
int main()
{
 int N,K,J;       
 int i;
 scanf("%d",&N);  
 scanf("%d %d",&K,&J);
 int array[N-1];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
 float result, part1, part2, s1=0;
 float s2=0;
    for(i=0;i<K;i++)
    {
        s1=s1+array[i];
    }
    for(i=0;i<J;i++)
    {
        s2=s2+array[N-1-i];
    }
part1 = s1/K;
part2 = s2/J;
result = part1-part2;
printf("%0.1f\n",result);
return 0;
}