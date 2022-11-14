#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);
int a,b;

int main()
{
    srand(time(0));

    int loss = 0, win = 0;
    char ch;

    do
    {
        int x = play_game();
        if (x)
        {
            printf("You win\n");
            win++;
        }
        else
        {
            printf("You lose\n");
            loss++;
        }
        printf("Play again:");
        ch = getchar();
        getchar();
    } while (ch == 'Y' || ch == 'y');
    printf("\n\nWins : %d\nLosses: %d", win, loss);
    return 0;
}

int roll_dice(void)
{
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    return (a + b);
}

bool play_game(void)
{
    int rolled;
    int sum = roll_dice();
    printf("You rolled: %d\n", sum);

    if (sum == 7 || sum == 11)
    {
        return true;
    }

    if (sum == 2 || sum == 3 || sum == 12)
    {
        return false;
    }

    else
    {
        printf("Your point is %d\n", sum);
        do
        {
            rolled = roll_dice();
            if (rolled == 7)
            {
                printf("You rolled : 7\n");
                return false;
            }
            printf("You rolled : %d", rolled);
            getchar();

        } while (rolled != sum);
        return 1;
    }
}