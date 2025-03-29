// #include <stdio.h>
// #include <cs50.h>

// int get_code(void);
// int get_integer_length(long long n);
// int get_diversed(long long num);

// int main(void)
// {
//     long long cardNumber = get_code();
//     get_diversed(cardNumber);
//     printf("Card number entered: %lld\n", cardNumber);
// }

// int get_code(void)
// {
//     long long code;
//     do
//     {
//         code = get_long("Enter card number: ");
//     }
//     while(get_integer_length(code) < 6);
//     return code;
// }

// int get_integer_length(long long n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     int length = 0;
//     unsigned long long temp = (n < 0) ? -n : n;

//     while (temp != 0)
//     {
//         temp /= 10;
//         length++;
//     }
//     return length;
// }

// int get_diversed(long long num)
// {
//     for (int i = 0;  ; i++)
//     {
//         printf("%i\n", i);
//     }
// }

//! Correct version

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long cNumber;

    do
    {
        cNumber = get_long("Please enter your card code: ");
    }
    while(cNumber < 0);

    long cTest1 = cNumber;
    long cTest2 = cNumber;

    int even, odd, sumEven = 0, sumOdd = 0;
    while (cTest1 > 0)
    {
        // Find odd nums
        odd = cTest1 % 10;
        sumOdd += odd;
        cTest1 -= odd;
        cTest1 /= 10;

        // Find even nums
        even = cTest1 % 10;

        // Change sum if even numbers (* 2) bigger than 9 and split this number
        if ((even * 2) > 9)
        {
            int bigEven = even * 2;
            sumEven += bigEven % 10;
            sumEven += bigEven / 10;
        }
        else
        {
            sumEven += even * 2;
        }
        cTest1 -= even;
        cTest1 /= 10;
    }

    if ( (sumOdd + sumEven) % 10 == 0)
    {
        bool amex, mastercard, visa;

        amex =
            (cTest2 >= 340000000000000 && cTest2 < 350000000000000) ||
            (cTest2 >= 370000000000000 && cTest2 < 380000000000000);

        mastercard =
            (cTest2 >= 5100000000000000 && cTest2 < 5600000000000000);

        visa =
            (cTest2 >= 4000000000000 && cTest2 < 5000000000000) ||
            (cTest2 >= 4000000000000000 && cTest2 < 5000000000000000);

        // Check which credit card it matches
        if (amex)
        {
            printf("AMEX\n");
        }
        else if (mastercard)
        {
            printf("MASTERCARD\n");
        }
        else if (visa)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
