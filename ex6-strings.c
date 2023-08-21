// ex6 -- strings in C aren't even really strings ....

#include <stdio.h>
#include <string.h> //strcmp, strlen

int main()
{
    // strings in C are just arrays of chars
    // terminated by the \0 string termination character:
    char hello[4] = {'h', 'e', 'j', '\0'};

    // C provides the following syntax to autonmatically
    // detect the length of the string + 1 and add a \0 in the end
    char magic_word[] = "abracadabra";

    // strlen gets the length of a char array:
    int word_length = strlen(magic_word);

    printf("The word %s is %d letters long.\n", magic_word, word_length);

    if (strcmp(magic_word, "abracadrabra"))
    {
        puts("Abracadabra is the magic word!\n");
    }
    // how do you think strcmp works? can you write your own?

    puts("Now please enter your name: ");
    char full_name[25];
    fgets(full_name, sizeof(full_name), stdin);
    // you could also do scanf("%s", full_name)
    // but then you could not enter any whitespace:
    // "sebastian jensen" would get read as "sebastian"

    // fgets however, is also annoying, because it
    // also includes the \n at the end in capture
    // a simple solution is to replace it with an \0...
    full_name[strcspn(full_name, "\n")] = '\0';

    printf("Goodbye, %s!!!\n", full_name);

    return 0;
}
