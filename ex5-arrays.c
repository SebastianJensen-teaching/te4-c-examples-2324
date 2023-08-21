// ex5 - array basics in C

#include <stdio.h>

int global_array[100];
// global_array is going to be set to all zeroes since it is global

int main()
{
    // initializing arrays like this makes them all zero:
    int numbers[100] = {0};
    // why? because if you declare less elements than there are,
    // they all get set to the last declared element.

    for (int i = 0; i < 100; i++)
    {
        // notice that i only exists in memory during this loop
        numbers[i] = i;
    }
    // after the '}' i gets popped of the stack

    char letters[26];
    letters[0] = 'a';
    for (int i = 1; i < 25; i++)
    {
        // this is a brand new 'i' variable specific to this loop
        letters[i + 1] = letters[i] + 1;
    }

    for (int c = 0; c < 26; c++)
    {
        putchar(letters[c]);
    }
    putchar('\n');

    return 0;
}