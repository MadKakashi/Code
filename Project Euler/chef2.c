#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    getchar();

    while (t--)
    {
        int n;
        char ch;

        scanf("%d", &n);
        getchar();

        int arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &ch);
            arr[ch - 'a']++;
        }
        getchar();

        

        int arr2[26] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &ch);
            arr2[ch - 'a']++;
        }
        getchar();

        int min = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0 && arr2[i] != 0)
            {
                int ans = arr[i] > arr2[i] ? arr2[i] : arr[i];
                if (min < ans)
                {
                    min = ans;
                }
            }
        }

        if (min == 0) printf("0\n");
        else printf("%d\n", min);
    }
    return 0;
}