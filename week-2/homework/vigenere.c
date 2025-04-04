#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int shift(char c);
string vigenere(string plaintext, string keyword);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("İstifadə: ./vigenere açar\n");
        return 1;
    }

    string keyword = argv[1];
    for (int i = 0, n = strlen(keyword); i < n; i++)
    {
        if (!isalpha(keyword[i]))
        {
            printf("Açar yalnız hərflərdən ibarət olmalıdır.\n");
            return 1;
        }
    }

    string plaintext = get_string("plaintext: ");
    string ciphertext = vigenere(plaintext, keyword);
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

int shift(char c)
{
    if (isupper(c))
    {
        return c - 'A';
    }
    else if (islower(c))
    {
        return c - 'a';
    }
    return 0;
}

string vigenere(string plaintext, string keyword)
{
    int key_len = strlen(keyword);
    string ciphertext = plaintext;
    int key_index = 0;

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            int key_shift = shift(keyword[key_index % key_len]);
            char base = isupper(plaintext[i]) ? 'A' : 'a';
            ciphertext[i] = ((plaintext[i] - base + key_shift) % 26) + base;
            key_index++;
        }
    }
    return ciphertext;
}
