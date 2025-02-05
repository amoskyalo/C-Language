#include <stdio.h>
#include "app.c"
#include "increment.c"

int main()
{
    char var1 = 'A'; // single quotes for character

    float var2 = 4 / 9;     // trying to divide two int, value is 0
    float var3 = 4.0 / 9.0; // we divide two floats to get our desired value.

    int value;
    value = increment();
    value = increment();
    value = increment();

    // printf("%c", var1);
    // printf("%f", var2);
    // printf("%.3f", var3); // wecan use .(decimals number, eg: 3) to dictate the number of decimals we need.
    // printf("%d", a);
    printf("%d", value);
    return 0;
}