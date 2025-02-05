// => Assignment operators in C.

// => Used to assign values to variables.
// => They are binary operators: (require L value, R value)
// => They includ (+=, -=, *=, /=)

// Conditional operators.
// => They are ternary operators, they require move than two values;
// => ( ? : )

// Comma operator.
// => Has the least precedence over all other operators in C.

// Precedence and associativity of operators.
// => precedence this comes n hand, when we want to now, which operator will be evaluated first.
// => Operators with higher precedence will be evaluated first.
// => associativity of operators comes in hand when precedence is the same.

#include <stdio.h>

int main()
{
    char a = 7;
    int var;
    int num;

    num = (var = 15, var + 35);

    //(true === true)
    // a = 1;
    // b = 1;1
    // c = 1;
    // d = 1; => 1010 0101
    // printf("%d", num);
    // printf("%d", 'A');
    return 0;
}