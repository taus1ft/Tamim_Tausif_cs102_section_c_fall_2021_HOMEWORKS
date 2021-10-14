#include <stdio.h>

int main() {
       	int firststr, secondstr;
	char wordbank[2][10], placeholder[2][10];
	printf( "Enter Your Three Words to be Organized Alplabetically: " );
	for( firststr = 0; firststr < 3; firststr++ ) {
		gets( wordbank[firststr] );
       	}
	for( firststr = 0; firststr < 3; firststr++ ) {
		for( secondstr = firststr + 1; secondstr < 3; secondstr++ ) {
			if( strcmp( wordbank[firststr], wordbank[secondstr] ) > 0) {
				strcpy( placeholder, wordbank[firststr] );
				strcpy( wordbank[firststr], wordbank[secondstr] );
				strcpy( wordbank[secondstr], placeholder );
			}
		}
	}
	printf( "Here is The Origianl List of Words You Entered: \n" );
	printf( "Your First word was %s, Your Second Word Was %s, Your Third Word was %s. \n ", wordbank[0], wordbank[1], wordbank[2] );
	printf("\n" );
	printf( "Here is Your Words Organized Alplabetically: \n" );
	for( firststr = 0; firststr < 3; firststr++ ) {
		puts( wordbank[firststr] );
	}
	return 0;
}
