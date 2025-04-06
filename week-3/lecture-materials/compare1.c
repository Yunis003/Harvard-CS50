#include <stdio.h>
#include <cs50.h>

// Compare two strings
int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s == t)
    {
        // strings are different because they compare with their adresses not the value's. But int, char, float and other types don't
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}
