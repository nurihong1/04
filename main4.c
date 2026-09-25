#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int y,x;
	
	printf("Input the year: ");
	scanf("%i", &y);
	
	x=(y%4==00)&&(y%100!= 0)||(y%400==0);
	printf("Is the year %i the leap year? %i", y, x);
	

	return 0;
}