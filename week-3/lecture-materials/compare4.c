#include <stdio.h>
#include <cs50.h>
#include <string.h>

// This program compares two strings entered by the user and prints "same" if they are equal and "different" if they are not.
// It uses the strcmp function from the string.h library to perform the comparison.
int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }
    
    char *t = get_string("t: ");
    if (t == NULL)
    {
        return 1;
    }

    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}
