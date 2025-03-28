#include <stdio.h>
#include <cs50.h>

int get_code(void);
int get_integer_length(long long n);
int get_diversed(long long num);

int main(void)
{
    long long cardNumber = get_code();
    get_diversed(cardNumber);
    printf("Card number entered: %lld\n", cardNumber);
}

int get_code(void)
{
    long long code;
    do
    {
        code = get_long("Enter card number: ");
    }
    while(get_integer_length(code) < 6);
    return code;
}

int get_integer_length(long long n)
{
    if (n == 0)
    {
        return 1;
    }

    int length = 0;
    unsigned long long temp = (n < 0) ? -n : n;

    while (temp != 0)
    {
        temp /= 10;
        length++;
    }
    return length;
}

int get_diversed(long long num)
{
    for (int i = 0;  ; i++)
    {
        printf("%i\n", i);
    }
}
