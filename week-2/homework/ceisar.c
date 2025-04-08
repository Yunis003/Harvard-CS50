#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

string caesarCode(string text, int key);

int main(int argc, string argv[])
{
    int key;
    if (argc == 2)
    {
        // Convert string to integer
        key = atoi(argv[1]);
        printf("%i\n", key);
        string plaintext = get_string("plaintext: ");
        // Convert plaintext to caesar code
        caesarCode(plaintext, key);
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
    else{
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

// Convert normal text to caesar code
string caesarCode(string text, int key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // if letters is lowercase
        if (islower(text[i]))
        {
            text[i] = (char) (((text[i] - 'a' + key) % 26) + 'a');
        }
        // if letters is uppercase
        else if (isupper(text[i]))
        {
            text[i] = (char) (((text[i] - 'A' + key) % 26) + 'A');
        }
    }
    return text;
}
