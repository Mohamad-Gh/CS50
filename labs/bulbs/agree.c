#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char agreement = get_char("Do you agree? write only y or n ");

    if (agreement == 'y' || agreement == 'Y')
    {
        printf ("agreed.\n");
    }
    else
    {
        printf("not agreed.\n");
    }

}