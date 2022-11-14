// #include <stdio.h>

// int main()
// {
//     int a;
//     int b = 1;
//     printf("Enter the mumber n: ");
//     scanf("%d", &a);
//     while (b <= 10)
//     {
//         printf("%d \n", a * b);
//         b++;
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a;
//     int b = 1;
//     printf("enter :");
//     scanf("%d",&a);
//     do{
//         printf("%d\n",a*b);
//         b++;
//     } while(b<=10);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    printf("Enter :");
    scanf("%d", &a);
    for (1*a; b <= 10; b++)
    {
        printf("%d\n", a * b);
    }

    return 0;
}