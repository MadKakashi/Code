// #include<stdio.h>

// int main(){
//     int i=1,n=5;
//     while (i<n){
//         printf("%d\n",i*2);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=5;
//     while (i>0){
//         printf("T minus %d and counting\n",i);
//         i--;
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=5;
//     while (i>0){printf("T minus %d and counting\n",i--);}
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    while (n>0){
        printf("%d   %d\n",n,n*n);
        --n;
    }
    return 0;
}


