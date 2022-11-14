#include <stdio.h>

int main()
{
    int weight = 80;
    while (weight > 65)
    {
        printf("Do Exercise\n");
        printf("Enter weight");
        scanf("%d", &weight);
    }
    return 0;
}