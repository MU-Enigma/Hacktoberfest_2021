#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int hrs, min, res;
        scanf("%d%*c%d", &hrs, &min);
        res = hrs;
        if (hrs > 12)
        {
            hrs = hrs - 12;
        }
        float hrw = PI / 360.0;
        float h = hrw * min + (PI / 6.0) * hrs;
        float m = 2 * PI / 60.0 * min;
        if (h < m)
        {
            res++;
        }
        printf("%d\n", res);
    }
}