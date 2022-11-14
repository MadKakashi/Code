#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int len;
        int num_zero = 0, num_one = 0;
        scanf("%d", &len);
        getchar();
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] =getchar()-48;
            if (arr[i] == 1)
                num_one++;
            else
                num_zero++;
        }
        getchar();
        if (num_one % 2 == 1 && num_zero % 2 == 1)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }

    return 0;
}
