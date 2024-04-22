#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1>score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1<score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int n = strlen(word), j = 0;
    // First we turn all the chars to Uppercase because we can!!
    // Another way of counting the length of a String followed by using uppercse command
    while (word[j])
    {
        word[j] = toupper (word[j]);
        j++;
    }
    // for (int j = 0; j<n; j++)
    // {
    //     word[j] = toupper (word[j]);
    // }
    for (int i = 0; i<n; i++)
    {
        if (word [i] == 'A' || word [i] == 'I' || word [i] == 'L' || word [i] == 'E' || word [i] == 'N' || word [i] == 'O' || word [i] == 'R' || word [i] == 'S' || word [i] == 'T' || word [i] == 'U')
        {
            score += 1;
        }
        else if (word [i] == 'D' || word [i] == 'G')
        {
            score += 2;
        }
        else if (word [i] == 'B' || word [i] == 'C' || word [i] == 'M' || word [i] == 'P')
        {
            score += 3;
        }
        else if (word [i] == 'F' || word [i] == 'H' || word [i] == 'V' || word [i] == 'W' || word [i] == 'Y')
        {
            score += 4;
        }
        else if (word [i] == 'K')
        {
            score += 5;
        }
        else if (word [i] == 'J' || word [i] == 'X')
        {
            score += 8;
        }
        else if (word [i] == 'Q' || word [i] == 'Z')
        {
            score += 10;
        }
        else
        {
            score +=0;
        }
        }
    return score;

    }