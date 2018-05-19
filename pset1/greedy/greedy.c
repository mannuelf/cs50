#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount_given;
    
    int QUARTER = 25;
    int DIMES = 10;
    int NICKEL = 5;
    int PENNIES = 1;

    int change_owed;
    int balance = 0;
    int coins = 0;

    do
    {
        printf("Thank you for the: $ ");
        amount_given = get_float();
    }
    while (amount_given < 0);

    // round input to cents
    balance = round(change_owed * 100);
    printf("Change owed: %d\n", balance);

    // while quarters can be used
    coins += balance / QUARTER; // increase amount
    balance %= QUARTER; // amount decreased by a QUARTER
    printf("coins %i. balance %i. DIMES %i.\n", coins, balance, QUARTER);

    // while nickel can be used
    coins += balance / NICKEL; // increase amount
    balance %= NICKEL; // amount decrease by a nickel
    printf("coins %i. balance %i. DIMES %i.\n", coins, balance, NICKEL);

    // while dimes can be used
    coins += balance / DIMES; // increase amount
    balance %= DIMES; // amount decrease by a dime
    printf("coins %i. balance %i. DIMES %i.\n", coins, balance, DIMES);

    // while pennies can used
    coins += balance / PENNIES; // increase amount
    balance %= PENNIES; // amount decrease by a penny
    // Testing
    printf("coins %i. balance %i. PENNIES %i.\n", coins, balance, PENNIES);

    // print number of coins used
    // printf("Numbers of coins needed: %i\n", coins);
    // printf("Your change is: %i\n", balance);
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