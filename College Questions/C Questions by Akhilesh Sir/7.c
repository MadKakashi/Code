//wap to convert the temperature which is given in celsius to fahrenheit

#include<stdio.h>

int main(){
    //google the formula of conversion(most important step)
    float celsius,fahrenheit;

    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius*1.8)+32;

    printf("The temperature in fahrenheit is %f",fahrenheit);

    return 0;
}