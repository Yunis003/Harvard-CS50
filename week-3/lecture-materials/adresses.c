#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print out string's adresses 0x482480afnb i.e
    printf("%p\n", s);
    printf("%p\n", t);
}
