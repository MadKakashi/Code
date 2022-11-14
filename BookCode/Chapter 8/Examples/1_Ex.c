#include<stdio.h>
#define N 10
int main(){
    int i;
    int a[10];

    printf("Enter the 10 numbers:");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    printf("In reverse order:");
    for(i=9;i>0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}