#include <stdio.h>

int main()
{
    int fact = 1;
    int i = 1;
    while (1)
    {
        fact = fact * i;
        i++;
        if (i < 10)
        {
            continue;
        }
        break;
    }
    printf("%d", fact);
    return 0;
}