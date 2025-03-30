#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is yoru name?\n");
    printf("Hello %s!\n", name);
}