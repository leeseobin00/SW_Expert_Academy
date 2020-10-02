//algorithm
//input the value of which all aliquot is sought
//rotate the for statement to output a value 
//with a modular value of zero
//turn for statement from 1 to num

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num; 
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {	//determination of aliquot
			printf("%d ", i);
		}
	}
	return 0;
}