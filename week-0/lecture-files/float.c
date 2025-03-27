#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float n = get_float("Enter input: \n");
    printf("Hello, %.12f\n", n);
}
