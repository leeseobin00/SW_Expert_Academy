//algorithm
//input number of test case
//for statement for test case
//extract the year, month, and day from the date
//determine if day corresponding to month is valid
//if not valid, assign -1 to day
//determine whether to print the date or -1 by checking the value of day

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int num, date;
	int y[10], m[10], d[10];

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &date);

		y[i] = date / 10000;
		date = date % 10000;

		m[i] = date / 100;
		date = date % 100;

		d[i] = date;

		switch (m[i])
		{
		case 1:
			if ((d[i] < 1)||(d[i] > 31)){
				d[i] = -1;
			}
			break;
		case 2:
			if ((d[i] < 1) || (d[i] > 28)) {
				d[i] = -1;
			}
			break;
		case 3:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		case 4:
			if ((d[i] < 1) || (d[i] > 30)) {
				d[i] = -1;
			}
			break;
		case 5:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		case 6:
			if ((d[i] < 1) || (d[i] > 30)) {
				d[i] = -1;
			}
			break;
		case 7:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		case 8:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		case 9:
			if ((d[i] < 1) || (d[i] > 30)) {
				d[i] = -1;
			}
			break;
		case 10:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		case 11:
			if ((d[i] < 1) || (d[i] > 30)) {
				d[i] = -1;
			}
			break;
		case 12:
			if ((d[i] < 1) || (d[i] > 31)) {
				d[i] = -1;
			}
			break;
		default:
			d[i] = -1;
			break;
		}
	}

	for (int i = 0; i < num; i++) {
		if (d[i] == -1) {
			printf("#%d -1\n", i + 1);
		}
		else {
			printf("#%d %04d/%02d/%02d\n", i + 1, y[i], m[i], d[i]);
		}
	}
	return 0;
}
