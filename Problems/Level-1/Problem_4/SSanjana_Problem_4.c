#include <stdio.h>

int main(int argc, char const *argv[])
{
	int seconds;
	scanf("%d",&seconds);
	int days,hours,minutes;
	days = seconds / (60 * 60 * 24);
    seconds -= days * (60 * 60 * 24);
    hours = seconds / (60 * 60);
    seconds -= hours * (60 * 60);
    minutes = seconds / 60;
    seconds -= minutes * 60;
    printf("%d day,%d hr,%d min,%d sec\n",days,hours,minutes,seconds);
	return 0;
}