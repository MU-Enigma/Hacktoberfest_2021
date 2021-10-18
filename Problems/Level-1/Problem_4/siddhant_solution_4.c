#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int seconds = (N % 60);
    int minutes = (N % 3600) / 60;
    int hours = (N % 86400) / 3600;
    int days = (N % (86400 * 30)) / 86400;
    printf("%d day, %d hr, %d min, %d sec",days,hours,minutes,seconds);

}