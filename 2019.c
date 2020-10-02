//algorithm
//input the value how many times going to multiply two
//multiplies 0 to num by 2 and stores in array
//the first part of the array starts with 1
//outputs result value

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mulTwo(int result[10], int num);
void printOutput(int result[10], int num);

int main(void) {
	int num; 
	int result[10];

	scanf("%d", &num);
	
	mulTwo(result, num);
	printOutput(result, num);

	return 0;
}

//function name: mulTwo
//description: multiplying the value of i - 1 in an array by 2
//input: array to save result, number of how many to multiply
//output: none
void mulTwo(int result[10], int num) {
	result[0] = 1;
	for (int i = 1; i <= num; i++) {
		result[i] = result[i - 1] * 2;
	}
}

//function name: printOutput
//description: output result value
//input: array to print value, number of elements in the array
//output: none
void printOutput(int result[10], int num) {
	for (int i = 0; i <= num; i++) {
		printf("%d ", result[i]);
	}
}