#include <stdio.h>
int main() {
	float length, width;
	printf("Enter the length and the width of the reactangle without units to find the perimeter: \n");
	scanf("%f %f", &length, &width);
	float perimeter;
	perimeter = (2 * length) + (2 * width);
	printf("The perimeter of the rectangle with the length of %f and the width of %f is: \n%f\n", length, width, perimeter);
	return 0;
}
	
