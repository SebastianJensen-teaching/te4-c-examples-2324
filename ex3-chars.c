// Ex3 -- All about chars

#include <stdio.h> // puts, printf
#include <ctype.h> // isupper, tolower

void print_char(char ch)
{
    printf("Character: '%c'\t Value: %d\n", ch, ch);
}

int main()
{
    // a char stores a single byte (or 8 bits)
    // a byte can hold a number between -127 and 127
    // (an unsigned char could hold a number between 0-255)
    char char1 = 'A';
    print_char(char1);
    if (isupper(char1))
    {
        char1 = tolower(char1);
    }
    print_char(char1);
    puts("And here are ascii characters 32-63:");
    for (int i = 32; i < 64; i++)
    {
        print_char(i);
    }
    // how do you think isupper and islower works?
    // how do you think toupper and tolower works?
    // look at an ascii table and think about what you have to do:
    // https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg
}
