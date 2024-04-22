#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Ask for input
    string str = get_string("please write something: ");
    int i = 0, n = strlen(str), number, array [n];

    // split the string to each letter or chars
    while (str[i])
    {
        // define an array so all the 8 elements would be zero and reset everytime same goes for 'j'
        int residual [BITS_IN_BYTE] = {0}, j = 0;
        // convert each letter to a number
        number = (int) str[i];
        // lets calculate the binary mode of each number and put it in an array reversedly
        while (number != 0)
        {
            residual [BITS_IN_BYTE-1-j]= number % 2;
            number = number / 2;
            j++;
        }
        // call the bulb emojies for that array
        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(residual[k]);
        }
        i++;
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}