// Conditionals (if-else, nested if);

// Switch;
// =>replacement for long else if statements;

// for loops and while loops;
// loops help us write repetitive tasks.

// syntax of while loop:
// while(expression (should return boolean value)){
//     statements here;
// }

// syntax of for loop:
// for(initialization; condition; increment/decrement){
//     statements here;
// }

#include <stdio.h>

int main()
{
    int num = 4;

    switch (num)
    {
    case 1:
        printf("Not today");
        break;
    case 2:
        printf("Not today");
        break;
    case 3:
        printf("Not today");
        break;
    case 4:
        num++;
        printf("Today is a holiday, and tomorrow is date %d", num);
    default:
        break;
    }

    return 0;
}