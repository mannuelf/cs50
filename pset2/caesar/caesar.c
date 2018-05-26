#include <stdio.h>
#include <cs50.h>
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

    int k = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: %s\n", plaintext);
}