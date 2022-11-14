#include<stdio.h>

int main(){
    float a,b,c,d;

    printf("Enter the both fractions:");
    scanf("%f/%f+%f/%f",&a,&b,&c,&d);

    printf("%.1f",((a*d)+(b*c))/(b*d));

    return 0;
}