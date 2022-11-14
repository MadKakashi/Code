// #include<stdio.h>
// #include <cs50.c>

// int main(){

//     char c = get_char("Do you agree? ");

//     if (c=='y' || c=='Y'){
//         printf("Agreed.\n");
//     }
//     else if (c=='n' || c=='N'){
//         printf("Not agreed.\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int m = n;
    int q = n;
    int count = 0;
    float sum = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    
    printf("User entered %d digit number\n", count);

    while (m != 0)
    {   
        sum += (int)pow(m%10,count);  
        printf("%d %f\n",m, sum);
        m /= 10;   
    }
    
    if (sum == q)
    {
        printf("\nThe entered number is armstrong no.");
    }
    else
    {
        printf("\nThe entered number is not armstrong no.");
    }
    return 0;
}