#include <crypt.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string text = argv[1];
    if (argc != 2)
    {
        printf("Write useful input \n");
        return 1;
    }
    int len = strlen(argv[1]);
    if (text[len - 1] == '\n') text[len - 1] = '\0';

    string salt = crypt_gensalt("$2b$", 15, NULL, 0);
    string encrypted = crypt(text, salt);

    printf("Encrypted: %s \n", encrypted);
}
