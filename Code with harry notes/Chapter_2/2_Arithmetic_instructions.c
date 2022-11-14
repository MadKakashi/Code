#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;

    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);
    printf("The value of a*b is %d\n", a * b);
    printf("The value of a/b is %d\n", a / b);

    int z;
    z = a * b;
    //z =a; //legal
    //b*a = z; //illegal
    printf("The value of z is %d\n", z);

    printf("5 when divided by 2 leaves a remainder: %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder: %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder: %d\n", 5 % -2);

    //No operator is assumed to be present
    //printf("the value of 4*5 is %d\n", (4)(5)) --> will not return 20/wrong!
    printf("the value of 4*5 is %d\n", (4)*(5)); //valid

    //there is no operator to perform exponentiation in C
    //printf("the value of 4^5 is %d', 4^5) --> will not 4 produce to the power 5
    printf("the value of 4 to the power 5 is %f\n", pow(4,5));

    printf("The value of 6+5 is %d\n", 6+5);
    printf("The value of 6+5.6 is %f\n", 6 + 5.6);
    printf("The value of 6.1+5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 3.0/9 is %f\n", 3.0/9);


    printf("The value of 5/2 is %d\n", 5/2);
    return 0;
}