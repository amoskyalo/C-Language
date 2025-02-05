#include <stdio.h>
#define PI 3.14159

int main()
{
    const char user_name = 'A';
    //user_name = 'a';

    int a, b;

    printf("Please enter the first number");
    scanf("%d", &a);
    printf("Please enter the second number");
    scanf("%d", &b);
    printf("Sum of %d and %d is equal to %d", a, b, a + b);

    //printf("value is %.3f", PI);
    //printf("Logged in as %c", user_name);
    return 0;
}