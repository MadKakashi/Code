#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    int cupboards[rows][2];

    int *p = cupboards[0];

    while (p <= &cupboards[rows - 1][1])
    {
        scanf("%d", p);
        p++;
    }

    p = &cupboards[0][0];
    int left_open = 0, right_open = 0;;
    for (int i = 0; i < rows; i++)
    {
        if (cupboards[i][0])
        {
            left_open++;
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        if (cupboards[i][1])
        {
            right_open++;
        }
    }
    int left_closed = rows - left_open;
    int right_closed = rows - right_open;

    int sum = 0;
    if (right_closed > right_open)
    {
        sum += right_open;
    }
    else
    {
        sum += right_closed;
    }
    if (left_closed > left_open)
    {
        sum += left_open;
    }
    else
    {
        sum += left_closed;
    }
    printf("%d",sum);
    return 0;
}