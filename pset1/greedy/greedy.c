#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float();
    }
    while (n > 0);
}


/*
    1. Prompt user fo a amount of change
    - amount must make sense
    - what values are accepted
    - get_float

    2. Alway user the largest coin possible

    3. Keep track of coins used
    - how many coins to be returned
    - amount to be returned

    4. Print the final number of coins
*/