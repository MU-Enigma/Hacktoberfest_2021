#include <stdio.h>
int main(){
    int i=0;
    char s[1000];
    scanf("%s",&s);
while(s[i]!='\0'){
    int count0 = 0,count1=0;
    while(s[i]!='0'&&s[i]!='\0'){
        count0++;
        i++;
    }
    while(s[i]!='1'&&s[i]!='\0'){
        count1=count1+1;
        i++;
    }
    if(count0!=count1){
        printf("False");
        return 0;
    }
}
printf("True");
return 0;
}