#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // get the key of the command line argument
    // turn the key into an integer
    // prompt user for plaintext
    // for each character in the plaintext string
        // if alphabetic
            // preserve case
            // shift plaintext character by key
    // print ciphertext

    if (argc == 2)
    {
        int key = atoi(argv[1]);
        printf("plaintext: ");

        string userInput = get_string();
        printf("ciphertext: ");
        
        for (int i = 0, j = strlen(userInput); i < j; i++)
        {
            if (isalpha(userInput[i]))
            {
                if (isupper(userInput[i]))
                {
                    printf("%c", (((userInput[i] - 97) + key) % 26) + 65);
                } 
                else 
                {
                    printf("%c", (((userInput[i] - 97) + key) % 26) + 97);
                }
            }
        }
    }
    else
    {
        printf("ERRRRRR!!\n");
        return 1;
    }
    printf("\n");
    return 0;
}