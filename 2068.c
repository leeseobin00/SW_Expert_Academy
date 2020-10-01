//algorithm
//input number of test case 
//for statement for number of test case
//find max value to use max integer value
//store max value in result array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(int result[10], int num);

int main(void) {
	int num, val, max = 0, result[10];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &val);
			if (val > max) {
				max = val;
			}
		}
		result[i] = max;
		max = 0;
	}
	printOutput(result, num);
	return 0;
}

void printOutput(int result[10], int num) {
	for (int i = 0; i < num; i++) {
		printf("#%d %d\n", i + 1, result[i]);
	}
}
