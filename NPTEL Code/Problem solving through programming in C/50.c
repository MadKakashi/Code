#include <stdio.h>

int main()
{
    int num,i=2;
    printf("Enter a number:");
    scanf("%d", &num);

    for ( ; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("Not prime");
            break;
        }
    }
    
    if (i == num)
    {
        printf("%d is a prime number",num );
    }
    
    return 0;
}
