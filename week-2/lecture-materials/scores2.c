#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    // Implement an array
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    // Chart scores
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i is: ", i + 1);
        chart(scores[i]);
    }
}

// Functiont that prints all of the elements inside the int
void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}
