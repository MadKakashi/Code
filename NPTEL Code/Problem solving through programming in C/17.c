#include<stdio.h>

int main(){
    double perimeter;
    float pi = 3.14;
    int r = 2;
    perimeter = 2.0*(double)pi*(double)r; //typecasting of float to double and a integer to double
    printf("%f",perimeter);

    return 0;
}