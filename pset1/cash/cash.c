#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // request the amount of Cent that we owed the customer
    int money;

    do
    {
       money = get_int("how much money customer needs? ");
    }
    while (money < 1);
    return money;
}

int calculate_quarters(int cents)
{
    // divid cents by 25
    int number_quarters;
     number_quarters= cents / 25;
    return  number_quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int number_dimes;
     number_dimes = cents/ 10;
    return number_dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int number_nickels;
    number_nickels= cents / 5;
    return number_nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int number_pennies;
    number_pennies = cents/1;
    return number_pennies;
}
