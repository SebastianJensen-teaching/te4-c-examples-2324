// ex7 -- fgets in-depth

#include <stdio.h>  // fgets, printf
#include <string.h> // strcmp, strcspn

// the function to find the first occurence of a char
// in a string and return its index has the stupid name 'strcspn'
// let's use a define so we can call it something more sensible:
#define find_index_of strcspn

int main(void)
{
    // In example 6, I showed you how to get a string from the
    // keyboard with fgets. Here is a refresher:
    for (;;)
    {
        puts("Please enter the password to move on:");
        char input[64];
        fgets(input, sizeof(input), stdin);
        input[find_index_of(input, "\n")] = '\0';
        if (strcmp(input, "hej123") == 0)
        {
            break; // break out of the loop
        }
        printf("Echo: %s", input);
    }

    // fgets stands for File Get String, so you can use it
    // to get strings from other files than stdin.
    // To do that, you need to open a file:
    FILE *file = fopen("./ex1-printing.c", "r");

    // If fopen was unsuccessfull, file will be NULL
    // so lets check for that:
    if (file == NULL)
    {
        return -1; // crash the program, exit back to terminal
    }

    // If fgets hits the end of file, it will return NULL
    char line[128];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        puts(line);
    }
    // we have to close every file that we open with fclose
    fclose(file);

    return 0;
}