#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readFile(FILE *fp, int arr[10], int result[10], int num);
void printOutput(int result[10], int num);

int main(void) {
	int num, sum = 0;;
	int arr[10], result[10];	//store data

	FILE *fp = fopen("input.txt", "r");	//file open
	if (fp == NULL) {	//defensice coding for file open
		printf("File could not be opened!\n");
		return 0;	//end program
	}

	fscanf(fp, "%d", &num);	

	readFile(fp, arr, result, num);
	printOutput(result, num);

	fclose(fp);	//file close
	return 0;	//end program
}

//function name: readFile
//description: received value from file
//input: pointer of the file to be entered, array to store input data, array to input result value, number of values
//output: none
void readFile(FILE *fp, int arr[10], int result[10], int num) {
	int sum = 0;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 10; j++) {
			fscanf(fp, "%d", &arr[j]);
			if (arr[i] < 0 || arr[i] > 1000) {
				printf("The value is too small or too big!\n");
				return 0;
			}

			if (arr[j] % 2 == 1) {
				sum += arr[j];
			}
		}
		result[i] = sum;
		sum = 0;
	}
}

//function name: printOutput
//description: outputs results for input value
//input: array to print result
//output: number of result
void printOutput(int result[10], int num) {
	for (int i = 0; i < num; i++) {
		printf("#%d %d\n", i + 1, result[i]);
	}
}