#Tausif Tamim
#ADD GIT REPO LINK HERE!!!!

#This program asks the user to input the length and width of a rectangle in order to find the perimeter of such triangle. 

#I presume we would need to use stdio.h because the user input fxn.

#Steps:
#1. Make user give the length and width.
#2. Create and retrieve length and width using vars.
#3. Simple arthmatic to find length and width.
#4. Tell the reader what the perimeter is.

#Psuedocode:
##include stdio.h
#int main () {
#	float length, width;
#	make user type length width;
#	retrieve length width with scanf;
#	P = 2xlength + 2xwidth;
#	printf(length, width, perimeter);
#	return 0;
#}

#Actual Code:
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

#I reused some of my old homeworks tactics to retrieve multiple variables at once using scanf.

