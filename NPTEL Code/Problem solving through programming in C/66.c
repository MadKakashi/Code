#include <stdio.h>
int main()
{
    int N;
    float sum = 0.0;
    scanf("%d", &N);

    int i;
    for (i = 1; i <= N; i++)
    {
        sum = sum + (1.0 / i);
    }

    printf("Sum of the series is: %.2f\n", sum);

    return 0;
}
