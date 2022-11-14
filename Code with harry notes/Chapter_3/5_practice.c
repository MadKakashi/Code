#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b : \n");
    scanf("%d", &b);

    printf("Enter c : \n");
    scanf("%d", &c);

    printf("Enter d : \n");
    scanf("%d", &d);

    if ((a > b) && (a > c) && (a > d))
    {
        printf("%d is the greatest", a);
    }
    if ((b > a) && (b > c) && (b > d))
    {
        printf("%d is the greatest", a);
    }
    if ((c > a) && (c > b) && (c > d))
    {
        printf("%d is the greatest", b);
    }
    if ((d > b) && (d > a) && (d > b))
    {
        printf("%d is the greatest", c);
    }

    return 0;
}