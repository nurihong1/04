#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sec, hour, min, sec2;
	
	printf("Input the second: ");
	scanf("%i", &sec);
	
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec2 = sec % 60;
	
	printf("The time is %i : %i : %i", hour, min, sec2);
	
	return 0;
}