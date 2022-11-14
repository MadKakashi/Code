#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    while (n < 10)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            continue;
        }
        sum += n;
        n++;
    }
    return 0;
}