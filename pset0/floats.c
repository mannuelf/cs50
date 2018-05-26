// Integer arithmatic

#include <cs50.h>
#include <stdio.h>

int main()
{
    // Prompt user for x
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Perform arithmetic
    printf("%f divided by %f is %.10f\n", x, y, x / y);
}