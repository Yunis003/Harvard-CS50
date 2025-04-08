#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    if (!s)
    {
        return 1;
    }

    // Memory allocation
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    // Its the shortcut for the loops, its automaticly copy from one to one.
    // Filled variable came first, main variable came later.
    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
