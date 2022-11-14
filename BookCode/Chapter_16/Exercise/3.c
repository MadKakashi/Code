#include<stdio.h>

struct complex {
    double real;
    double imaginary;
};

struct complex make_complex(double a, double b){
    struct complex example;
    // example.real = a;
    // example.imaginary = b;
    // return example;
    return (struct complex){a,b};
}

struct complex return_complex(struct complex var1,struct complex var2){
    struct complex result;
    result.real = var1.real + var2.real;
    result.imaginary = var1.imaginary + var2.imaginary;
    return result;
}

int main(){
    struct complex c1,c2,c3;
    return 0;
}