// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter 3 digits number:");
//     scanf("%d",&a);

//     printf("%d%d\b%d",a%10,a%100,a/100);
//     return 0;
// }

#include <stdio.h>


int main()
{
    int a;
    printf("Enter 3 digits number:");
    scanf("%d", &a);
    printf("%d%d%d", a % 10, (a / 10) % 10, a / 100);

    return 0;
}