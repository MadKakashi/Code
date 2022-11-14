#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    int array_rand[1000];
    int user_input_array[1000];
    int level = 1;
    int x = 0 ;    

    srand(time(0));

    printf("\n\n\nWELCOME TO A MINI GAME OF REMEMBERING NUMBERS\n");
    printf("LETS GO!\n");
    for ( ; ; level++,x++)
    {
        int sn = ((x)*(x+1))/2;

        printf("LEVEL - %d\n", level);

        for (int i = level; i > 0; i--)
        {
            array_rand[counter] = rand() % 10;
            counter++;
        }

        for (int n = sn ; n < counter; n++)
        {
            printf("%d ", array_rand[n]);
        }

        printf("\n");

        for (int j = 0; j < counter; j++)
        {
            scanf("%d", &user_input_array[j]);
            if (array_rand[j] != user_input_array[j])
            {
                printf("Oops, Wrong\n");
                printf("You reached level %d!",level-1);
                exit(0);
            }
        }
        printf("\n\n\n\n\n");
    }
    printf("You reached level %d!",level-1);
    return 0;
}