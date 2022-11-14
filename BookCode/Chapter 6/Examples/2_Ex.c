//summing a seriese of numbers
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("This program sums a series of integer.\n");
    printf("Enter integers(0 to terminate):");

    scanf("%d", &n);
    //printf("%d\n",n);
    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d", sum);

    return 0;
}