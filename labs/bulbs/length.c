#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string ("what's your name? ");

    int n=0;
    while (name[n] !='\0')
    {
        n++;
    }
    int m = strlen (name);
    printf("n =%i m=%i\n", n, m);
}
