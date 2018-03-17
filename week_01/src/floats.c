// Integer arithmatic

#include <cs50.h>
#include <stdio.h>

int main()
{
    // Promt user for x
    int x = get_float("x: ");

    // Promt user for y
    int y = get_float("y: ");

    // Perform arithmetic
    printf("%f divided by %f is %i\n", x, y, x / y);
}