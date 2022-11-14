#include<stdio.h>
#include <math.h>
#define n 5

int main(){
    int a[n];
    float sum = 0.0;
    float avg;

    for (int i = 0 ; i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int j = 0 ; j < n;j++){
        sum += a[j];
    }
    //printf("%f\n",sum);
    avg = sum/n;
    //printf("%f",avg);

    float numerator= 0;

    for (int i = 0 ;i<n;i++){
        numerator += ((a[i]-avg)*(a[i]-avg));
    }
    printf("%f\n",numerator);
    numerator /= (n-1);

    numerator = sqrt(numerator);
    printf("%f",numerator);

    return 0;
}