#include<stdio.h>

int main(){
    int a[10],i,min;

    printf("Enter 10 numbers\n");
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    min = 99999;
    for (i=0;i<10;i++){
        if (min>a[i]){
            min = a[i];
        }
    }
    printf("%d",min);

    
    return 0;
}