#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        printf("Change owed: ");
        n = get_float();
    }
    while(n < 0);
}