//algorithm
//input the string to convert
//32 is subtracted to convert to lowercase only
//when the Aski code represents uppercase letters

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char before[80], after[80];
	int len;
	scanf("%s", before);	//input the string
	len = strlen(before);	//find out the length

	for (int i = 0; i < len; i++) {
		if ((before[i] >= 97) && (before[i] <= 122)) {	//search uppercase letters
			after[i] = before[i] - 32;	//convert to lowercase letter
		}
		else {	//not uppercase letter
			after[i] = before[i];	
		}
	}

	printf("%s", after);	//print out the result
	return 0;
}