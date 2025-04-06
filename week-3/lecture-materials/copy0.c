#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("s: ");

    // Its copy s's adress for not just its own, changes will affect both of them. 
    string t = s;

    if(strlen(t) > 0)
    {
        // Capitalize first character of string
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}