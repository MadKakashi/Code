// #include<stdio.h>

// int main(){
//     int a[10];
//     int i;

//     printf("Enter the 10 numbers:");
//     for (i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("In reverse order:");
//     for (i=9;i>=0;i--){
//         printf("%d ",a[i]);
//     }

//     return 0;
// }

#include<stdio.h>
#define N 10
int main(){
    int a[N],i;

    printf("Enter %d number:",N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    printf("In reverse order:");
    for (i=N-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}