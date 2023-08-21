// Ex2 -- Scanf, Global vs. automatic variables, if-else

#include <stdio.h> //scanf, puts, printf

int sum; // sum is global. it means three things:
// 1. globals exist for the whole program
// 2. globals can be accessed from ANYWHERE in the program.
// 3. globals are always set to 0 if you dont initialize them.

int main(void)
{
    int number1 = 0; // automatic variables will die after scope is over
    int number2 = 0; // and you MUST initialize them to some value (!)
    // if you don't initialize them, they will contain a random value

    puts("Please enter an integer: ");
    scanf("%d", &number1); // like printf in reverse
    puts("Please enter another integer: ");
    scanf("%d", &number2);

    if (number1 == number2)
    {
        puts("number1 is equal to number 2");
    }
    else if (number1 > number2)
    {
        puts("number1 is greater than number2");
    }
    else
    {
        puts("number2 is greater than number1");
    }

    sum = number1 + number2; // warning: the int may overflow!
    printf("The sum of %d and %d is %d\n", number1, number2, sum);

    // number1 and number2 dies here, at the end of the function that created them
}
// sum will die at the end of the program, after main finished executing