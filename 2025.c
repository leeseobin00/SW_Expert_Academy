//algorithm
//input the value that you are going to add
//add up to the number entered throungh for statement
//for statement must be repeated from 1 to num

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num;
	int sum = 0;

	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {	//for statement to add num
		sum += i;
	}
	printf("%d", sum);	
	return 0;
}