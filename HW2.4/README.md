#Tausif Tamim
#https://github.com/taus1ft/Tamim_Tausif_cs102_section_c_fall_2021_HOMEWORKS/tree/HW2/HW2.4

#This problem asked us to minimize the amount of coins possible given cents:

#Steps:
#1. Ask user how many cents they want to minimize.
#2. Keep dividing and finding remiander at the same time.
#3. Slowly hedge the block down to cents again.
#4. Print out each amount stored in vars.

#Code:
#include <stdio.h>
int main() {
        int cents, dollars, quarters, dimes, nickels;
        printf("How many cents you would like to minimize to the least possible amount of coins?: \n");
        scanf("%i", &cents);
        dollars = cents / 100;
        printf("The number of dollars you will get back are: %i.\n", dollars);
        cents = cents % 100;
        quarters = cents / 25;
        printf("The number of quarters you will get back are: %i.\n", quarters);
        cents = cents % 25;
        dimes = cents / 10;
        printf("The number of dimes you will get back are: %i.\n", dimes);
        cents = cents % 10;
        nickels = cents / 5;
        printf("The number of nickels you will get back are: %i.\n", nickels);
        cents = cents % 5;
        printf("The number of cents you will get back are: %i.\n", cents);
        return 0;
}
~                                                                                                                    ~                                                                                                                    ~                                                                                                                    ~                                                                                                                    ~                                                                              
