#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height > 8 || height < 1);
    for (int i = 0; i < height; i++)
    {
        for (int k = height - i - 1; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i + 1; k++)
        {
                printf("#");
        }
        printf("\n");
    }
}
