#include <stdio.h>

int main()
{ int size,val;
  int count=0;
  int i;

 scanf("%d",&size);

 int array[size];

 for(int i=0;i<size;i++)
 {
     scanf("%d",&array[i]);
 }

 for(i=0;i<=size-1;i=i+2)
 {
     val=array[i];
     if(val%2==0)
     { 
         printf("%d ",val);
         count=1;
     }
 }

 if(count==0)
 {
     printf("None\n");
 }

return 0;


}