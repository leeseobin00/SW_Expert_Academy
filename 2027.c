//algorithm
//print out the given text
//output # when i and j have the same value through for statement
//and + when not

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	for (int i = 0; i < 5; i++) {	//double for statement
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("#");
			}
			else {
				printf("+");
			}
		}
		printf("\n");	//change to next line
	}
	return 0;
}