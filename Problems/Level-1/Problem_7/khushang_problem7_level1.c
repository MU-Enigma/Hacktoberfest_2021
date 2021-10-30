//
//  main.c
//  kkk
//
//  Created by Khushang Zaveri on 31/10/21.
//

#include <stdio.h>
#include<string.h>
int main()
{  int N;
    scanf("%d",&N);
    for(int y=0;y<N;y++){
    int c[1000];
    char A[1000];
    scanf("%s",A);
    int a=0;
    int m=strlen(A);
    
    for(int i=m-a;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(A[i]==A[j]){
                int f=0;
                for(int e=0;e>=a;e++){
                    if(c[a]==j){
                        f=1;
                    }
                }
                if(f==0){
                c[a]=i;
                a++;}
            }
        }
    }
    for(int i=0;i<m;i++){
        int flag=0;
        for(int w=0;w<a;w++){
            if(i==c[w]){
                flag=1;
            }
        }
        if(flag==0){
            printf("%c",A[i]);
        }
    }
    printf("\n");
    }
    
    
}
