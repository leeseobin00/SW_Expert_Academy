#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(int result[10], int num);

int main(void) {
	int num, sum = 0;;
	int arr[10], result[10];	//store data

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &arr[j]);
			if (arr[i] < 0 || arr[i] > 10000) {
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

	printf("\n");
	printOutput(result, num);

	return 0;	//end program
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