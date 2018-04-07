#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promt user for a positve number
    int n;
    do
    {
        n = get_int("Positive number: ");
    } 
    while (n <= 0);

    // Print out bricks for given number
    // Print out rows
    for (int i = 0; i < n; i++)
    {
        // Print out columns
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// TODO
// Promt and validate user input
// draw the half pyrimid

// ensure the user inputs an integer, positive || negative || 0 ? promt user to try again

// valid heights: [0, 23]
// invalid heights: less than 0, more than 23

/*
    The Mario Pyramid

         #
        ##
       ###
      ####
     #####
    ######

    for every row: 
    - print spaces
    - print hashes
    - print a new line
*/