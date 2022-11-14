#include <stdio.h>

int sum_of_digts(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, zeros = 0, fives = 0;
    scanf("%d", &n);

    int num;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 5)
        {
            fives++;
        }
        else
        {
            zeros++;
        }
    }

    for (; fives > 0;)
    {
        if ((sum_of_digts(5 * fives) % 9) == 0)
            break;
        fives--;
    }

    if (zeros == 0)
    {
        printf("-1");
    }

    else
    {
        if (fives > 0)
            {
                while (fives)
                {
                    printf("5");
                    fives--;
                }
                while (zeros)
                {
                    printf("0");
                    zeros--;
                }
            }
        else
            {
                printf("0");
            }
    }

    return 0;
}