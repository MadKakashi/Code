#include<stdio.h>

int main(){
    int a[5];
    int i;
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
    for (i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

    int b[5];

    for (i=0;i<5;i++){
        b[i]=a[i];
    }
    printf("THe bn is :\n");

    for (i=0;i<5;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}