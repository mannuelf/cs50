#include <cs50.h>
#include <stdio.h>

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

int main(void)
{
    int height;

    do
    {
        printf("Please choose number between 1 and 23: ");
        height = get_int();
    } while (height < 0 || height > 23);

    // for each line repeat
    for (int line = 0; line < height; line++)
    {

        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }

        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}