#include <stdio.h>
int main()
{int N,count=0;
    scanf("%d",&N);
int a[N];
for (int i=0;i<N;i++)
{scanf("%d",&a[i]);}
for(int i=0;i<N;i++)
{
    if(a[i]%2==0 && i%2==0)
        {printf("%d ",a[i]);
            count++;
        }
    else
        {continue;
        }
}
if(count==0){
for(int i=0;i<N;i++)
{
    if(a[i]%2!=0 || i%2!=0)
        {printf("None");
        break;}
}}

return 0;
}