#include<stdio.h>
#define N 10

int main(){
    int a[N],i,min;

    printf("Enter 10 number ");
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    min = 99999;
    for (i=0;i<N;i++){
        if (min>a[i]){
            min = a[i];
        }
    }
    printf("%d",min);
    return 0;
}