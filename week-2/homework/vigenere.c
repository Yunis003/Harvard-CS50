#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

string converter(string text, int key);
int shift(char c);

int main(int argc, string argv[])
{
    int key;
    if (argc >= 2)
    {
        key = shift(argv[1][0]);
        printf("%i\n", key);
        string plaintext = get_string("plaintext: ");
        converter(plaintext, key);
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
    else
    {
        printf("Undefined input: please try again");
        return 1;
    }
}

int shift(char c)
{
    c = toupper(c);
    return c;
}

string converter(string text, int key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        text[i] = text[i] + (key - 65);
    }
    return text;
}
