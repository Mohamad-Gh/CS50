#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size, end_size;
    do
    {
        start_size = get_int("Enter the starting size, which is 9 or more than that: ");
    }
    while (start_size <9);
    // TODO: Prompt for end size

    do
    {
        end_size = get_int("Enter the ending size, which is more than your starting size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold

    float current_population = start_size;

    int year = 0;

    while (current_population < end_size)
    {
        current_population = current_population + (current_population/3) - (current_population/4);
        if (current_population < end_size || year == 0 || year == 1)
            {
                year ++;
            }
        // printf("%f \n %i\n ", current_population, end_size);
        // printf("Year: %i", year);
    }
        // TODO: Print number of years
    printf("Years: %i", year);
}
