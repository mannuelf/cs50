#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money;
    int balance;
    int counter;

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int pennies = 1;

    do
    {
        printf("How much change do I owe you? $ ");
        money = get_float();
        money = (int) round(money);
        balance = money * 100;
    }
    while(money < 0);

    counter = 0;

    while (balance >= quarter)
    {
        balance = balance - 25;
        counter++;
    }

    while (balance >= dime)
    {
        balance = balance - 10;
        counter++;
    }

    while (balance >= nickel)
    {
        balance = balance - 5;
        counter++;
    }

    while (balance >= pennies)
    {
        balance = balance - 1;
        counter++;
    }

    printf("change owed: %i \n", counter);
}