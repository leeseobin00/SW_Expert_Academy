//algorithm
//가위는 1, 바위는 2, 보는 3
//number entered for what a b is
//block with if clause, except in the same case
//find out who wins by using the formula in case

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);
	if (a == b) {	//except in the same case
		printf("There is no tie!\n");
		return -1;	
	}
	else if ((a == b + 1) || (a == b - 2)) {	//case the A wins
		printf("A\n");
	}
	else if ((b == a + 1) || (b == a - 2)){	//case that B wins
		printf("B\n");
	}
	return 0;
}