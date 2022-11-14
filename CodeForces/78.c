#include <stdio.h>

int main()
{
    int pages, ans = 0;
    scanf("%d", &pages);

    int array[7];
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    while (pages)
    {
        for (int i = 0; i < 7; i++)
        {
            pages -= array[i];

            if (pages <= 0)
            {
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        if (ans)
        {
            break;
        }
    }
    printf("%d", ans);

    return 0;
}