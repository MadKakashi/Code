#include <stdio.h>

int main()
{
    int i,j;
    for (j = 1; j <= 3; j++)
    {
        for (i = 1; i <= 5; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}