//algorithm
//input the number of how many test case
//input a and b
//store divided result value and modular value into array
//outputs result value according to conditions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(int a[10], int b[10], int n);

int main(void) {
	int num;
	int a, b;
	int result[10], rest[10];

	scanf("%d", &num);	//received input value of test case to be entered
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);	//two values entered
		result[i] = a / b;	//store divided values
		rest[i] = a % b;	//store the remaining values
	}
	printOutput(result, rest, num);
	return 0;
}

//function name: printOutput
//description: outputs the result value to meet the conditions
//input: two arrays to store the divided value and the remaining value and number of test cases
//output: none
void printOutput(int a[10], int b[10], int n) {
	for (int i = 0; i < n; i++) {
		printf("#%d %d %d\n", i + 1, a[i], b[i]);
	}
}