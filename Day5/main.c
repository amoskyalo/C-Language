// Operators in C;

// =>Arithmetic operators ( +, -, *, /, % );
    // => all are binary, 2 operands are required t perform opeation.

// =>Relational operators ( ==, !=, <=, >=, >, < );
    // => used for comparing two values, and they only return boolean values.

// =>Logical operators ( ||, &&, !)
    // => && and || used for combining two values, and they return boolean values.
    // => && ( all conditions are true )
    // => || ( one or more condition is true )

// =>Increment/decrement operators ( +, - ) unary operators.
    // =>Preincrement ( applied before the operator, eg: ++a);
    // =>Postincrement ( applied after the operator, eg: a++);
    // => Same case for decrement, ( post, and pre);

// =>Bitwise operators ( &, ^, |, ~, <<, >> );
    // => They do bitwise manipulation.
// =>Assignment operators ( =, +=, -=, *=, /=, %= ...)

// =>Preceedence and associativity for arithmetic operations ( *, /, %, +, - )

#include <stdio.h>
int main()
{
    int length = 15;
    int width = 10;
    int a = 2, b = 6, c = 18, d = 2;

    int area = width * length;
    int results = a * b + c / d - 17;

    // printf("Area of a rectangle whole length is 15m and width is 10m is %dm", area);
    printf("Test for precedence and associativity %d", results);

    return 0;
}