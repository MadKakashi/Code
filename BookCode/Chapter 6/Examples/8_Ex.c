// #include<stdio.h>

// int main(){
//     int n=6,d;
//     for (d=2;d<n;d++){
//         if (n%d==0)
//         break;}
//         if (d<n){
//             printf("%d is divisible by %d\n",n,d);
//         }
//         else {
//             printf("%d is prime\n",n);
//         }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;

//     for(;;)
//     {
//         printf("Enter the number(enter 0 to stop):");
//         scanf("%d",&n);
//         if (n==0){break;}
//         printf("%d cubed is %d\n",n,n*n*n);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i;
//     for (i=1;i<=5;i++){
//         if(i==3)
//         {continue;}
//         printf("%d\n",i);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n=0,sum=0,i;
    while (n<10){
        scanf("%d",&i);
        if (i == 0){
            //continue;}
            break;}
            sum += i;
            n++;
        }
        printf("%d",sum);

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     int n = 0;
//     int i;
//     while (n < 4)
//     {
//         scanf("%d", &i);
//         if (i != 0)
//         {
//             sum += i;
//             n++;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }