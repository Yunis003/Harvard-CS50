#include <stdio.h>

int factorial (int n);

int main(void)
{
    int number = factorial(3);
    printf("%i\n", number);
}

int factorial (int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
