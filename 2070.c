#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printOutput(char result[10], int n);

int main(void) {
	int num, a, b;
	char result[10];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) {
			result[i] = '>';
		}
		else if (a < b) {
			result[i] = '<';
		}
		else {
			result[i] = '=';
		}
	}
	printOutput(result, num);
	return 0;
}

//function name: printOutput
//description: outputs results for input value
//input: array to print result
//output: none
void printOutput(char result[10], int n) {
	for (int a = 0; a < n; a++) {
		printf("#%d %c\n", a + 1, result[a]);
	}
}