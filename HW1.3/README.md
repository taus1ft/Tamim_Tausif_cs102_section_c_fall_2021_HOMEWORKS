#Tausif Tamim
#This part of the assignment is done in my Dev User repository on MyC, not yet connected to my GitHub Account.
#We will be doing that on class Tuesday the 5th of October, 2021.

#This part of the Homework required us to create a program to find the Mean(average), Median, and the Mode of a set of 5 numbers that the user need to input.

#Steps Required to Make A Successful Code:
#1. Create a way for the User to input their five numbers.
#2. Create a basic artihmatic formula to find the mean, which is the sum of the numbers divided by the total amount of numbers, which is 5.
#3. This is kind of a cheat, but if we make the user input the numbers in ascending order, the median is easy because the third number would always be the median. This should be allowed because it does not restrict the user or limit them to a specific input.
#4. The mode should require a for loop to search for common numbers. These common numbers can be stored and then added up the amount of each to return the mode.
#5. Returns the user's numbers that they inputed and returns the mean median and mode of those numbers.

#Pseudocode:
#int main () {
#	user input to find list of numbers
#	use scanf to find the numbers inputed
#	add the numbers together
#	divide the sum by 5
#	return the third number of the list which is the median
#	for(list of numbers; position < 5; position ++) {
#		check if current number in array is the same as the one after it. If so, we add one to the counter for mode.
#	}
#	print mean, median, mode

#Actual Code:
#include <stdio.h>
int main() {
	int a,b,c,d,e;
	printf("Enter five integers from smallest to largest: ");
	scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
	float sum;
	int pos = 0, curnum = 0, maxnum = 1;
	sum = a+b+c+d+e;
	float mean = sum / 5;
	int numlist[5] = {a,b,c,d,e};
	for(numlist[5]; pos < 5; pos++) {
		curnum = numlost[pos];
		if (curnum = numlist[pos+1]) {
			maxnum = maxnum + 1;
		}
	pos = pos + 1;
	}
	printf("Your mean is %f, median is %i, and mode is %i.", mean, c, maxnum);
	return 0;
	}

#MAJOR HELP TO TUTORIAL POINTS FOR SHOWING ME THE FKOAT DATATYPE ALSO FOR HOW TO CREATE ARRAYS. I ALSO EXCHANGED HELP FROM MOHAMMED RASHID ON WHERE TO IMPLEMENT SOME PARTS OF THE FUNCTIONS.
