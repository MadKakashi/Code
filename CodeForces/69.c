#include <stdio.h>

int change(int initial[][3], int i, int j)
{
    return (initial[i][j] == 1 ? 0 : 1);
}

int main()
{
    int str[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &str[i][j]);
        }
        getchar();
    }

    int initial[3][3] = {{1, 1, 1},
                         {1, 1, 1},
                         {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (str[i][j] % 2 == 1)
            {
                initial[i][j] = change(initial, i, j);
                if (j+1>=0 && j+1<=2)
                initial[i][j + 1] = change(initial, i, j + 1);
                if (j-1>=0 && j-1<=2)
                initial[i][j - 1] = change(initial, i, j - 1);
                if (i+1>=0 && i+1<=2)
                initial[i + 1][j] = change(initial, i + 1, j);
                if (i-1>=0 && i-1<=2)
                initial[i - 1][j] = change(initial, i - 1, j);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", initial[i][j]);
        }
        printf("\n");
    }

    return 0;
}