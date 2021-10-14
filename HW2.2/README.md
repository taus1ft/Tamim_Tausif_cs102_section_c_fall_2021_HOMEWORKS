#Tausif Tamim
#ADD GIT REPO LINK HERE!!!!

#This program asks the user to input the time in minutes in order to find the hours and minutes..

#I presume we would need to use stdio.h because the user input fxn.

#Steps:
#1. Make user give the length and width.
#2. Create and retrieve minutes using vars.
#3. Simple arthmatic to find floor and remainder.
#4. Tell the reader what the conversion is.

#Psuedocode:
##include stdio.h
#int main () {
#       int total minutes ;
#       make user type total minutes;
#       retrieve total mins with scanf;
#       Hours = floor total mins;
#	Remaining mins = modulo mins by 60
#       printf(hours and mins);
#       return 0;
#}

#Actual Code:
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

#I reused some of my old homeworks tactics to retrieve multiple variables at once using scanf.

