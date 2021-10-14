# Tausif Tamim
# This part of the HW does not have a repository location yet. I will be doing that on class on October 5, 2021.

#This part of the homework asked for alphabetizing three different strings of words given by the user..

#Steps for making the code:
#1. Make user input three different words as string datatypes using a forloop.
#2. Use another for loop to sort out each strong by comparing each variable to one another until we find the organized list.
#3. Compare the 1st word to the second word, third word, and etc.
#4. Return what order the user originally gave.
#5. Return the alphabetized order of the words

#Psuedocode:
#for(each part of string values)
#	gets( user input )
#for(each aprt of string values)
#	check which value is greater between the first string value, and others
#	check again for the other string values
#	USE strcpy and strcmp (courtesy of TUTORIALS POINT)
# Return the alphabeticized list of string.

#Actual Code:

#include <stdio.h>

int main() {
   int firststr, secondstr;
   char wordbank[2][10], placeholder[2][10];
   printf( "Enter Your Three Words to be Organized Alplabetically: " );
   for( firststr = 0; firststr < 3; firststr++ ) 
   {
      gets( wordbank[firststr] );
   }
   for( firststr = 0; firststr < 3; firststr++ ) 
   {
       for( secondstr = firststr + 1; secondstr < 3; secondstr++ ) 
       {
           if( strcmp( wordbank[firststr], wordbank[secondstr] ) > 0) 
           {
               strcpy( placeholder, wordbank[firststr] );
               strcpy( wordbank[firststr], wordbank[secondstr] );
               strcpy( wordbank[secondstr], placeholder ); 
               
           }
       }
   }
   printf( "Here is The Origianl List of Words You Entered: \n");
   printf("Your First word was %a, Your Second Word Was %a, Your Third Word was %a. \n ", wordbank[0], wordbank[1], wordbank[2]);
   printf("\n");
   printf( "Here is Your Words Organized Alplabetically: \n" );
   for( firststr = 0; firststr < 3; firststr++ )
      puts( wordbank[firststr] );
   return 0;
}

#Tutorial points helped me to find multidimentional arrays and also useful functions such as strcmp and strcpy were helpful to sort the function. I also recieved help from CPROGRAMMING.COM as they taught me how to make iterative for loops stacked on eachother and outside for the gathering of the user input.
