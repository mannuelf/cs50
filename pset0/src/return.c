# include <cs50.h>
# include <stdio.h>

int square(int n); // prototype
int main(void)
{
    int x = get_int("x: ");
    printf("%i\n", x * x);
}

int square(int n)
{
    return n * n;
}