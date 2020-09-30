//algorithm:
//enter the number of array and the elements of the array from user
//sort the array used bubble sort algorithm
//print out middle value of the sorted array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num, arr[200], temp;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num - 1; i++) {	//bubble sort
		for (int j = i + 1; j < num; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	printf("%d", arr[num / 2]);	//print out middle value
	
	return 0;
}