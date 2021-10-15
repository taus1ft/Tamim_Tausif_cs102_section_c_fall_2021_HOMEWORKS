#include <stdio.h>

int main(void) {
    float value1;
    int value2;
    char value3;
    printf("Please provide a float value, an int value, and a character value with a space in between: \n");
    scanf("%f %i %c, ", &value1, &value2, &value3);
    printf("Here is your returned values: \n %d, %f, %d", value2, value1, value3);
    return 0;
}
