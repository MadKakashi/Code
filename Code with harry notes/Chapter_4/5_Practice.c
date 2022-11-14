// #include<stdio.h>

// int main(){
//     int a=3,prod=1 ;
//     // printf("enter");
//     // scanf("%d",&a);
    
//     for(int a ; a>=1 ; a--){
//             prod *= a;
//     }
//     printf("%d",prod);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i = 1, n = 7, factorial = 1;
//     for (int i=1;i<=n;i++ ){
//         factorial *= i;
//     }
//     printf("the factorial of %d is %d",n , factorial);
//     return 0;
// }

#include<stdio.h>

int main(){
    int a = 7;
    int factorial =1 ;
    while(a>=1){
        factorial *= a;
        a--;
    }
    printf("%d",factorial);
    return 0;
}