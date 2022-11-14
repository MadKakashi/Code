#include <stdio.h>

int main()
{
    int m1, m2, y1, y2, d1, d2;
    printf("enter first date:");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("enter second date:");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1 > y2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
    }
    if(y2>y1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    }
    if (y1 == y2)
    {
        if (m1 > m2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
        }
        if (m1 < m2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
        }
    }
    if (m1 == m2)
    {
        if (d1 > d2)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
        }
        else
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
        }
    }
        return 0;
    }