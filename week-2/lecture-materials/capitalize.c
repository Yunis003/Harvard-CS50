#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("Enter your name: ");

    // Capitalize all of the string
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            // Subtraction of each lovercase and uppercase character equal to = 32
            // That's why we subtract name[i] - 32 and it gaves us the uppercase letter
            printf("%c", name[i] - ('b' - 'B'));
        }
        else{
            printf("%c", name[i]);
        }
    }
    printf("\n");

    // Other optimized way:
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}
