//algorithm
//no fixed number of digits in the question, 
//so conditions must be attached
//use divide and modular to find the result and remine value

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num, sum = 0;
	scanf("%d", &num);
	
	if (num >= 1000) {
		sum += (num / 1000);
		num = num % 1000;
	}
	if (num >= 100) {
		sum += (num / 100);
		num = num % 100;
	}
	if (num >= 10) {
		sum += (num / 10);
		num = num % 10;
	}
	sum += num;

	printf("%d", sum);
	
	return 0;
}