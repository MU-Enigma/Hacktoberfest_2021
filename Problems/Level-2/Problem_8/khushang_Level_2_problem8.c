//
//  main.m
//  codes
//
//  Created by Khushang Zaveri on 30/10/21.
//

#include <stdio.h>
#include<string.h>

int main()
{
  char A[10000];
  scanf("%s",A);
  int count=0,N=strlen(A),i=0,flag=0;
  while(i<N){
      if(A[i]=='1'){
          while(A[i]=='1'){
              count++;
              i++;
          }
          while(A[i]=='0'){
              count--;
              i++;
          }
          if(count!=0){
              printf("False");
              flag=1;
              break;
          }
      }
      if(A[i]=='0'){
          while(A[i]=='0'){
              count++;
              i++;
          }
          while(A[i]=='1'){
              count--;
              i++;
          }
          if(count!=0){
              printf("False");
              flag=1;
              break;
          }
      }
  }
  if(flag==0){
      printf("True");
  }
}

