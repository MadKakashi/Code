#include<stdio.h>

struct {
    double real;
    double imaginary;
} c1 ={0.0,1.0},c2={1.0,0.0},c3;

int main(){
    c3.real = c1.real + c2.real;
    c3.imaginary = c2.imaginary + c1.imaginary;
    printf("%f %f",c3.imaginary , c3.real);
    return 0;
}

//c1 = c2;