// #include<stdio.h>

// int main(){
//     int i,n,denom;
//     float e,term,epsilon;

//     printf("Enter the integer n:");
//     scanf("%d",&n);

//     for (i=1,denom=1,e=1.0f;i<=n;i++){
//         term=1.0f/(denom*=i);
//         e+=term;
//     }
//     printf("%f",e);
//     return 0;
// }
#include<stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    printf("%d",(i/3)-2);
    return 0;
}