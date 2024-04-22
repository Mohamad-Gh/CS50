#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first_name = get_string("what's your name? ");
    // string second_name = get_string("what's your last name? ");
    printf("hello, %s\n", first_name);
}