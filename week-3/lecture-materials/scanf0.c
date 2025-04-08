// Get an integer from the user using scanf

#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    // Ampersand using for the adresses's of the x variable and when user include input, it will locate in the adress of x
    // If we initialize int *x its already give back us adress, but we don't.
    scanf("%i", &x);
    printf("x: %i\n", x);
}
