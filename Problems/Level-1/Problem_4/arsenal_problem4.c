#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s,m,h,d;
    s = (n % 60);
    m = (n % 3600) / 60;
    h = (n % 86400) / 3600;
    d = (n % (86400 * 30)) / 86400;
    printf("%d day, %d hr, %d min, %d sec",d,h,m,s);

}