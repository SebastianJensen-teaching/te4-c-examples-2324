// Ex1 -- printf, puts, putchar

#include <stdio.h> //puts, printf, putchar

int main(void)
{
    // puts stands for 'put string' and puts a string on the screen:
    puts("Hello TE4!");
    // printf stands for 'print formatted'. It allows you to do fancy stuff:
    printf("I am your %s teacher.\n", "programming");
    printf("I am %d years old.\n", 36);
    printf("This is %.2f%% true.\n", 99.98);

    // you can of course use variables as well as constants:
    int deep_space = 9;
    float pie = 3.1415f;
    printf("%4f can be used to calculate the area of Deep Space %d.", pie, deep_space);
    // notice I forgot the '\n' newline character
    // but if we just want to print a single character,
    // we can use putchar():
    putchar('\n');

    // extra security stuff:
    printf("This printf statement is not secure and can be exploited.\n");
    puts("So if you just want to print a single line, use puts");
    printf("%s", "Or use printf with at least one argument\n");
    puts("Goodbye!");
}

// you can read all about printf format specifiers at:
// http://www.cplusplus.com/reference/cstdio/printf