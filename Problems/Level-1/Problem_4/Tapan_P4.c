#include <stdio.h>

void time(int n){
    int sec = (n % 60);
    int min = (n % 3600) / 60;
    int hrs = (n % 86400) / 3600;
    int days = (n % (86400 * 30)) / 86400;
    printf("%d day, ",days);
    printf("%d hr, ",hrs);
    printf("%d min, ",min);
    printf("%d sec",sec);
}
  
int main(){
    int n;
    scanf("%d",&n);
    time(n);
    return 0;
}