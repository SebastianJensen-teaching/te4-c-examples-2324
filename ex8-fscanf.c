#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = fopen("./data/text.txt", "r");
    if (file == NULL)
    {
        // always do this check to see if fopen was successfull
        return -1; // we didnt find file, so crash
    }

    char line[1024];

    // fscanf returns the number of things it could find
    // and zero (0) if it could find nothing.
    // if it finds the end of file, it will return -1.
    // so this will loop until the file is over
    // or we find nothing:
    while (fscanf(file, "%1024s", line) > 0)
    {
        printf("%s", line);
        // I am using printf to demonstrate
        // that fscanf did NOT put the \n newline character
        // from our file into 'line' -- instead, when it saw
        // newline, it put '\0' into line and moved on.
    }

    fclose(file);

    return 0;
}