//algorithm
//input the number how to print #
//output using for statement as many as entered

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("#");
	}
	return 0;
}