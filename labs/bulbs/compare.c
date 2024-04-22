#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's your age?");
    int y = get_int ("what's your brother's age?");

    if (x > y)
    {
        printf("you are older than your brother\n");
    }
    else if (x < y)
    {
        printf ("you are younger than your brother\n");
    }
    else
    {
        printf("you and your bother are in the same age\n");
    }
}