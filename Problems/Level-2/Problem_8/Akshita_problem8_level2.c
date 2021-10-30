#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s", &str); //taking string input

    int flag=0,count=0,k=0,length,i;
    length=strlen(str); //the length of the string

    for(i=0;i<length;i++){
      if(str[0]!='1' || str[length-1]!='0') //checking the end and the starting values of string
      {
          flag=1;
          break;
      }
      
      if(str[i]=='1') //whenever value in any index is 1, increase count
      {
          count++;
      }
      else
      {
          k++;   //otherwise 
      }
      
      if((str[i]=='0' && str[i+1]=='1') || (str[i]=='0' && i==length-1)||str[i]=='0' && str[i+1]=='1') //checking for various possible cases
      {
          if(count!=k)
          {
              flag=1;
              break;
          }
          else
          {
              count=0;
              k=0;
          }
      }
  }
  if (flag==0){
      printf("True\n");}
      else
      printf("False\n");
  }


