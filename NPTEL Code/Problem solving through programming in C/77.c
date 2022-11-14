#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 numbers:");
    for (int i = 0 ; i<10;i++){
        scanf("%d",&a[i]);
    }

    for (int j = 0;j<10;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}