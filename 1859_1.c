#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(int result[10], int n);

int main(void) {
	int n, num;
	int result[10], arr[10];
	int max = 0, sum = 0;

	scanf("%d", &n);
	
	for (int a = 0; a < n; a++) {
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < num - 1; i++) {
			for (int j = i + 1; j < num; j++) {
				if (arr[j] > arr[i]) {
					if (arr[j] - arr[i] > max) {
						max = arr[j] - arr[i];
					}
				}
			}
			sum = sum + max;
			max = 0;
		}
		result[a] = sum;
		sum = 0;
	}
	
	printOutput(result, n);

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