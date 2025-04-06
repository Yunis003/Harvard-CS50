#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool compare_strings(char *s, char *t);

// Compare string with using the pointer
int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if(compare_strings(s, t))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}

bool compare_strings(char *s, char *t)
{
    if(strlen(s) != strlen(t))
    {
        return false;
    }

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }

    return true;
}
