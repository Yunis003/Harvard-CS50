#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_dollars(void);
int find_quarters(int cents);
int find_dimes(int cents);
int find_nickels(int cents);
int find_pennies(int cents);

int main(void)
{
    // Initalize money from the user
    int dollars = get_dollars();

    // Find quarters
    int quarters = find_quarters(dollars);

    // Find residue
    dollars = dollars - quarters * 25;

    // Find dimes
    int dimes = find_dimes(dollars);

    // Find residue
    dollars = dollars - dimes * 10;

    // Find nickels
    int nickels = find_nickels(dollars);

    // Find residue
    dollars = dollars - nickels * 5;

    // Find pennies
    int pennies = find_pennies(dollars);

    int coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);
}

// Get money from the user
int get_dollars(void)
{
    float money;
    int coins;
    do
    {
        money = get_float("Owed: ");
    }
    while (money < 0);
    coins = round(money * 100);
    return coins;
}

// Find quarter coins count
int find_quarters(int coins)
{
    int count = coins / 25;
    return count;
}

// Find dimes coins count
int find_dimes(int coins)
{
    int count = coins / 10;
    return count;
}

// Find nickels coins count
int find_nickels(int coins)
{
    int count = coins / 5;
    return count;
}

// Find pennies coins count
int find_pennies(int coins)
{
    int count = coins / 1;
    return count;
}
