#include <stdio.h>
int main() {
	int a, b, c, d, e;
	printf("Enter five integers from smallest to largest: \n ");
	scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
	float sum;
	int pos = 0, curnum = 0, maxnum = 1;
	sum = a + b + c + d + e;
	float mean = sum / 5;
	int numlist[5] = {a, b, c, d, e};
	for(numlist[5]; pos < 5; pos++) {
		curnum = numlist[pos];
		if(curnum = numlist[pos + 1]) {
			maxnum = maxnum + 1;
		}
		pos = pos + 1;
	}
	printf("Your mean is %f, median is %i, and mode is %i. \n", mean, c, maxnum);
	return 0;
}

