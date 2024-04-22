#include <cs50.h>
#include <stdio.h>

int break(int number);

int main(void)
{
    int input = get_long("Please input the Cards number: ");
    printf("%i\n", input);
    int length = break(input);
    
}

// check the length and each numbers
int break(int number)
{
    int remain = 0;
    while (number == 0)
    {
        remain = number % 10;
        number /= 10;
        i++;
    }
    return i;
// check the sum


}