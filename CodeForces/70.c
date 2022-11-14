#include <stdio.h>

int prime_check(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b, prime = 0;
    scanf("%d %d", &a, &b);
    a++;

    for (; a <= b; a++)
    {
        if (prime_check(a))
        {
            break;
        }
    }

    if (a == b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}