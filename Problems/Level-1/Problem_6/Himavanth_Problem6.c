#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][100];
    for(int i=0;i<n;i++){
        if(i!=0){
            scanf("%[^\n]%*c",&arr[i][0]);
        }
        else{
            scanf("\n");
            scanf("%[^\n]%*c",&arr[i][0]);
        }
    }

    for(int i=0;i<n;i++){
        int len = strlen(arr[i]);
    for(int j=0;j<len;j++){
        if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u'){
            for(int k=j;k<len;k++){
                arr[i][k]=arr[i][k+1];
            }
            j--;
            len--;
        }
        arr[i][len+1]='\0';
    }


    }
    for(int i=0;i<n;i++){
        if(arr[i][0]!='\0'){
        printf("%s\n",arr[i]);}
    }
}