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
        key = atoi(argv[1]);
        printf("%i\n", key);
        string plaintext = get_string("plaintext: ");
        caesarCode(plaintext, key);
        printf("ciphertext: %s\n", plaintext);
    }
}

string caesarCode(string text, int key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 'a' || text[i] <= 'z')
        {
            int c = (int) text[i] + key;
            text[i] = (char) c;
        }
        else
        {
            int c = (int) text[i] + key;
            text[i] = toupper((char) c);
        }
    }
    return text;
}
