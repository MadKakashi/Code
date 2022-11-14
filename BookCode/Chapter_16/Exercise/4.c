#include<stdio.h>

typedef struct{
    double real;
    double imaginary;
} Complex;

Complex c2,c1,c3;
Complex make_complex(Complex c){
    return (Complex){c.real,c.imaginary};
}

Complex add_complex(Complex c, Complex r){
    return (Complex){c.real+r.real , c.imaginary+r.imaginary};
}
int main(){
    
    return 0;
}