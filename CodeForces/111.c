#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int tests;

    scanf("%d", &tests);

    while (tests--)
    {
        int n, counter = 0;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), cmpfunc);
        int j = 0;

        while ((arr[0] * 2) > arr[j] && j < n)
        {
            j++;
        }
        if (j == n)
        {
            printf("0--------\n");
            continue;
        }
        for (; j < n; j++)
        {
            if ((arr[j] % (2 * arr[0] - 1)) == 0)
            {
                counter--;
            }
            counter += (arr[j]) / ((2 * arr[0]) - 1);
        }
        printf("%d---------\n", counter);
    }

    return 0;
}