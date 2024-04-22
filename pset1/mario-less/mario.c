#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
       height = get_int ("Enter a number between 1 to 8: ");
    }
    while ((1 > height || height >8));
    //printf("%i", height);


    for (int row =1; row <= height; row++)
        {
            for (int space=0; space < height-row; space++)
            {
                printf(" ");
            }
            for (int shape = 0; shape < row; shape++)
            {
                printf("#");
            }
            printf("\n");
        }
}