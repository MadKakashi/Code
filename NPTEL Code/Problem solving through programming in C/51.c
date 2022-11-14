// #include <stdio.h>

// int main()
// {
//     int n, i = 2;
//     scanf("%d", &n);
//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             printf("%d is not a prime \n", n);
//             break;
//         }
//         i = i + 1;
//         }
//     if (i==n){
//         printf("Prime");
//     }


//     return 0;
// }
#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i=2;
    scanf("%d",&n);
    while (i<n){
        if(n%i==0){
            printf("%d is not a prime number\n",n);
            exit(0);
        }
        i = i+1;
    }
    printf("%d is a prime\n");
    return 0;
}