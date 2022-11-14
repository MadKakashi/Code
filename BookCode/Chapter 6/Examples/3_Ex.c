// #include<stdio.h>

// int main(){
//     int digits=0,n;

//     printf("Enter a nonnegative integer:");
//     scanf("%d",&n);

//     do{
//         n/= 10;
//         printf("%d\n",n);
//         digits++;
//     } while (n>0);

//     printf("The number has %d digits\n",digits);
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i;
//     for (i=10;i>0;i--){
//         printf("T minus %d and counting\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){int i=5;
//     for(int i=0;i<=10;i++){
//         printf("%d\n",i);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a,j;
//     a =(j=3,j++);
//     printf("%d %d\n",a,j);
//     a = a+1;
//     printf("%d",a);
//     return 0;
// }

#include<stdio.h>

int main(){
    int a =5;
    printf("%d\n",a++);
    printf("%d",++a);
    return 0;
}