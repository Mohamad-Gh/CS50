// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *dicput = fopen(const char *dictionary, "r");
    if (!dicput)
    {
        return false;
    }
    // find the end of the file size
    fseek(dicput, 0, SEEK_END);
    int size = ftell(dicput);
    // allocate memory for char with size of the file
    char ch[size];
    fread(ch, sizeof(char), size, dicput);
    close (dicput);

    return true;

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    define num as number of words in dic
    unsigned int num = 0;
    for(int i = 0; i <= sizeof(ch); i++) // not sure if sizeof(ch) works to find the size an array
    {
        if (ch[i]== '\\') // we use \ as indicator for words
        {
            num++;
        }
        else
        {
            continue;
        }
    }
    return num;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
