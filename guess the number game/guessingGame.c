#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number, guess;
    int no_of_guess = 0;

    srand(time(NULL));

    printf("Welcome To World Of Guessing Numbers\n");

    // Generating a number between 1 and 100
    random_number = rand() % 100 + 1;

    do
    {
        printf("\nPlease enter your guess between (1 to 100): ");
        scanf("%d", &guess);

        no_of_guess++;

        if (guess < random_number)
        {
            printf("Guess a larger number..\n");
        }
        else if (guess > random_number)
        {
            printf("Guess a smaller number..\n");
        }
        else
        {
            printf("Congrats!!! Correct guess in %d attempts\n", no_of_guess);
        }

    } while (guess != random_number);

    printf("Bye Bye, Thanks for playing!\n");
    printf("Developed by: Sanyam Shah\n");

    return 0;
}