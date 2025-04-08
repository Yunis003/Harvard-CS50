#include <stdio.h>

int main(void)
{
    char s[6];
    printf("s: ");
    // Arrays are list of a characters and that's why they are automatically locate in adress
    // That's why we do not need to insert & or * 
    scanf("%s", s);
    printf("s: %s\n", s);
}
