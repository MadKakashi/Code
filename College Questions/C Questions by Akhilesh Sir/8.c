//wap to change the fiven temperature which is in fahrenheit to kelvin

#include <stdio.h>

int main()
{
    float fahrenheit, kelvin;

    printf("Enter the temperature in fahrenheit:");
    scanf("%f", &fahrenheit);

    kelvin = (((fahrenheit - 32) * 5) / 9) + 273.15;
    printf("The temperature in kelvin is %f", kelvin);
    return 0;
}