#include <stdio.h>

int main()
{
    int N, First_digit, Last_digit;

    scanf("%d", &N); // The number is accepted from the test case
    int num = N;
    First_digit = N;
    int i;

    for (i = 0; num > 0; i++)
    {
        num /= 10;
    }
  // printf("%d\n",i);


    for (int j = 1; j < i; j++)
    {
        First_digit /= 10;
        
    }
    printf("%d",First_digit);
    


    Last_digit = N%10;


   printf("Sum of First and Last digit = %d", First_digit + Last_digit);
    return 0;
}