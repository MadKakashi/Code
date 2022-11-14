#include <stdio.h>

int main()
{
    int n,count=0;
    printf("Enter a number between 0 to 32767:");
    scanf("%d", &n);
    printf("       ");
    while(n)
    {   count++;
        printf("%d", n % 8);
        n /= 8;
        printf("\b\b");
    }
    //printf("\n%d",count);
    while(count<=5){
        printf("0\b\b");
        count++;
    }
    return 0;
}