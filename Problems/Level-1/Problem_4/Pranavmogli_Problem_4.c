#include <stdio.h>
int main() {
	int sec, d,h, m, s;

	scanf("%d", &sec);
	d= (sec) / (60 * 60 * 24);
sec -= d * (60 * 60 * 24);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("%d day, %d hr, %d min, %d sec \n",d,h,m,s);
	
	return 0;
}