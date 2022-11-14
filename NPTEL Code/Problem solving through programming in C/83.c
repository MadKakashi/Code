#include<stdio.h>

int main(){
    int a[10],i;
    int sum = 0 ;
    float avg;

    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = (sum/10.0);

    printf("%f",avg);
    return 0;
}