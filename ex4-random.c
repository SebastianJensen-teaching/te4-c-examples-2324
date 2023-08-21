// Ex4 -- Random number generation

#include <stdio.h>   // puts, fgets, stdin
#include <stdlib.h>  // srand, rand
#include <stdbool.h> // bool, true, false
#include <time.h>    // time_t, time

int main()
{
    time_t current_time; // store the current time
    time(&current_time); // gets time from operating system
    srand(current_time); // initialize random with the current time

    int answer = (rand() % 9) + 1;
    int guesses = 0;
    bool won = false;

    puts("This is a number guessing game");
    puts("Please guess what number I am thinking of? (1-10)");
    while (!won)
    {
        guesses++;

        int guess = 0;
        scanf("%d\n", &guess);

        if (guess <= 0)
        {
            guesses--; // do not count invalid guesses
            puts("Invalid input. Try with a number 1-10.");
        }
        else if (guess > answer)
        {
            puts("Too high. Please try again!");
        }
        else if (guess < answer)
        {
            puts("Too low. Please try again!");
        }
        else
        {
            won = true;
        }
    }
    printf("Yes, that's right, it was %d all along!\n", answer);
    printf("It took you %d guesses.\n", guesses);
}