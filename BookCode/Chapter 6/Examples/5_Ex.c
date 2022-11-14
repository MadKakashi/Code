// #include<stdio.h>

// int main(){
//     int d=2,n=17;
//     for (d=2;d<n;d++){
//         if (n%d==0)
//         break;
//     }
//     if (d<n){
//         printf("%d is divisible by %d\n",n,d);}
//     else {
//         printf("%d is prime\n",n);}
    
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number(enter 0 to stop:");
    scanf("%d",&n);
    for (;;){

        if (n==0){
        break;}
        printf("%d cubed is %d\n",n,n*n*n);
        --n;
    }
    return 0;
}