#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");

    for (int i = 0, n = strlen(name); i < n; i++)
    {
        // Before the equality, name[i] char convert to the ASCII number for itsels, its called CASTING
        int c = (int) name[i];
        printf("%c %i\n", name[i], c);
    }
}
