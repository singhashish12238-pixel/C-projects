#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int computer;
    /*0-> snake , 1-> water , 2 -> gun*/
    srand(time(NULL));
    computer = rand() % 3;
    int player;
    printf("choose the 0 for snake , 1 for water and 2 for gun :\n");
    scanf("%d", &player);

    // if (computer)
    // {
    //     /* code */
    // } long way to use if ...

    char *choices[] = {"snake", " water ", "gun"}; // simpler way
    printf("you choose : %s \n", choices[player]);
    printf("computer choose : %s \n", choices[computer]);

    if (player == computer)
    {
        printf("game DRAW!!\n");
    }
    if (player == 0 && computer == 1 || player == 1 && computer == 2 || player == 2 && computer == 0)
    {
        // printf(" computer choose  : %d\n",computer);
        printf("congratulation , you WON!!!\n");
    }
    else if (player == 0 && computer == 2 || player == 1 && computer == 0 || player == 2 && computer == 1)
    {
        // printf(" computer choose  : %d\n",computer);
        printf("you LOST!!, try again .\n");
    }
    else if (0 > player > 2)
    {
        printf("you choose WRONG , choose again\n");
    }
    else{
        printf("something went wrong.\n");
        
    }
    return 0;
}