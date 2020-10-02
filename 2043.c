//algorithm
//input the values of p, k
//rotate for statement to see how many times it runs from k to p
//just calculate how many numbers there are from p to k and add one

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int p, k;
	int num = 0;
	scanf("%d %d", &p, &k);
	
	for (int i = k; i <= p; i++) {
		num++;
	}
	printf("%d", num);
	//printf("%d", p - k + 1);
}