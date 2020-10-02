//algorithm
//input the number from user
//store numbers upside down in array
//print out result of array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void storeArr(int result[10], int num);
void printOutput(int result[10], int num);

int main(void) {
	int num;
	int result[10];

	scanf("%d", &num);

	storeArr(result, num);
	printOutput(result, num);

	return 0;
}

//function name: storeArr
//description: store values in array in order from number of input to zero
//input: array to store result value, entered number
//output: none
void storeArr(int result[10], int num) {
	int i = 0;
	while (num >= 0) {
		result[i] = num;
		num--;
		i++;
	}
}

//function name: printOutput
//description: output the result in the descending order
//input: array to print, entered number
//output: none
void printOutput(int result[10], int num) {
	for (int i = 0; i <= num; i++) {
		printf("%d ", result[i]);
	}
}