#include <stdio.h>
int main() {
	int nummin;
	printf("Enter the number of minutes you want to convert to hours and minutes: \n");
	scanf("%i", &nummin);
	int hours = nummin / 60;
	int mins = nummin % 60;
	printf("The minutes you entered are %i, and the converted time is %i hours and %i minutes.\n", nummin, hours, mins);
	return 0;
}
