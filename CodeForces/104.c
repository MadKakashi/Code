#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t, n, cost;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int money = 0;
        scanf("%d %d", &n, &cost);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        qsort(arr, n, sizeof(int), cmpfunc);
       
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while (arr[i] == arr[i + 1])
            {
                i++;
                count++;
            }
            count += 1;
            int m1 = count;
            int m2 = cost;
            if (m1 > m2)
                money+= m2;
            else
                money+=m1;
        }
        printf("%d\n",money);
    }
    return 0;
}