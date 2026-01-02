#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // initialize the random no.
    srand(time(0));
    // generate the random number 1 to 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guess = 0;
    int guessed_number;

    do
    {
        printf("guess the number : ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomnumber)
        {
            printf("high guess try low\n");
        }
        else if (guessed_number < randomnumber)
        {
            printf("low guess try high\n");
        }
        else
        {
            printf("contrats!!!\n");
        }
        no_of_guess++;

    } while (guessed_number != randomnumber);
    printf("you guess in %d times", no_of_guess);

    return 0;
}