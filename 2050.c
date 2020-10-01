//algorithm
//input the string from the user
//find out the length of string
//for statement for the length
//if you insert the char directly into the int value
//without using atoi, it will enter the Aski code
//-64 in uppercase code is a value that belongs to 1 to 26
//output number changed from 1 to 26 to meet conditions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[200];
	int len, arr[200];

	scanf("%s", str);	//input string

	len = strlen(str);	//find out length of string

	for (int i = 0; i < len; i++) {	
		arr[i] = str[i] - 64;	//char directly into the int value
	}

	for (int i = 0; i < len; i++) {	
		printf("%d ", arr[i]);	//print out the result 
	}
	return 0;
}