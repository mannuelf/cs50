#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promt user for number
    int i = get_int("number: ");

    // check sign o number
    if (i < 0)
    {
        printf("negative\n");
    }
    else if (i > 0)
    {
        printf("positive\n");
    }
    else
    {
        printf("zero\n");
    }
}