//algorithm
//input the two value to calculate
//outputs +, -, *, / value
//the decimal value is discarded and printed as an int value

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);	//input two value to calculate

	printf("%d\n", a + b);	//calculate + 
	printf("%d\n", a - b);	//calculate -
	printf("%d\n", a * b);	//calculate *
	printf("%d\n", a / b);	//calculate /
	
	return 0;
}