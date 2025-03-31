#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: \n");
    int n = 0;

    // Get string length manually: \0 is the ending of the strings
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);

    // Its not work, beacuse valuse is not an array, its worked just for strings
    int number = get_int("Number: ");
    int j = 0;

    // Get string length manually: \0 is the ending of the all variables
    while (number[j] != '\0')
    {
        j++;
    }
    printf("%i\n", j);
}
