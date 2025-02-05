// continuation of the loops.
// do-while loop
// => the difference betweeb while loop and do-while is:
// => for while loop, we first check the condition, the excecute the body.
// => in do-while loop, we first excecute the body, then check the condition.
// syntax:
// do {
//     statements;
// } while(condition);

// loop control statements.
// break => used to terminate from the loop;
// continue => forces execution of the next statement;

#include <stdio.h>

int main()
{
    // write a function that prints old nums between 1 and 20;
    int n = 2;

    for (int i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }

        // printf("%d ", i);
    };

    int i;

    for (i = 0; i < 20; i++)
    {
        {
            switch (i)
            {
            case 0:
                i += 5;
                // break;
            case 1:
                i += 2;
                // break;
            case 5:
                i += 5;
                // break;
            default:
                i += 4;
                // break;
            }
        }
        // printf("%d ", i);
    };

    //(16, 21) if no breaks in the switch statement.
    //(5, 10, 15, 20) when we have break statements.

    int j = -5;

    while (j <= 5)
    {
        if (j >= 0)
        {
            break;
        }
        else
        {
            j++;
            continue;
        }

        printf("%d", j);
    }

    // ans: 0 times;

    unsigned int k = 500;
    while (k++ != 0)
        ;
    //printf("%d", k);

   // palindrome;
    // 121, 222, 323, 424, 525, 626, 727, 828, 929;
    
    return 0;
}