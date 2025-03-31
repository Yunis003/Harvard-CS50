#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("What is your name?");
    printf("Output: \n");
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }

    // Performanse way:
    int n = strlen(name);
    for (int i = 0 ; i < n; i++)
    {
        printf("%c\n", name[i]);
    }
}
