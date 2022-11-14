#include <stdio.h>

int main()
{
    int a[100], i, min;
    int n;

    printf("Enter the number of numbers:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = 99999;
     for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min =a[i]  ;
        }

        
    }
    printf("%d", min);
    return 0;
}