#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(int result[10], int n);

int main(void) {
	int num, arr[10], result[10], sum = 0;
	
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
	
		if ((float) sum / 10 - 0.5 > (int) sum / 10) {
			result[i] = (int) sum / 10 + 1;
		}
		else {
			result[i] = (int) sum / 10;
		}
		
		sum = 0;
	}

	printOutput(result, num);
	return 0;
}

//function name: printOutput
//description: outputs results for input value
//input: array to print result
//output: none
void printOutput(int result[10], int n) {
	for (int a = 0; a < n; a++) {
		printf("#%d %d\n", a + 1, result[a]);
	}
}