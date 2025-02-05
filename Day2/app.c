// learning about integer datatype in C.

#include <stdio.h>
#include <limits.h>

int main()
{
    // signed integer;
    int var1 = INT_MIN; // minimum value of signed int according to my system;
    int var2 = INT_MAX; // maximum value of signed int according to my system;

    // unsigned int;
    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX; // maximum value of unsigned int according to my system;

    // signed int short;
    short int var5 = SHRT_MIN; // minimum value of short int according to my system;
    short int var6 = SHRT_MAX; // maximum value of short int according to my system;

    // unsigned int short;
    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX; // maximum value of short int according to my system;

    // printf("%d", sizeof(long int));
    // printf("%d to %d", var1, var2);
    // printf("%u to %u", var3, var4);
    // printf("%d, to %d", var5, var6);
    // printf("%u, to %u", var7, var8);
    return 0;
}