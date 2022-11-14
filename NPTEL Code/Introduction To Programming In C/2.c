#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int fact=1;
    printf("Enter the number");
    scanf("%d", &n);
    for (; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}