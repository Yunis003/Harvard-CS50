
#include <stdio.h>

int main(void)
{
    // Output is just (null) its not working correctly, because we do not allocate memory for that string
    char *s = NULL;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
