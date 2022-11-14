#include<stdio.h>

int main(){
     float centigrades;
     float fahrenheit;

     centigrades = 50;
     fahrenheit = ((9*centigrades)/5)+32;
     printf("The temperature %f celcius ",centigrades);
     printf("equals %f farhenheit",fahrenheit);
    return 0;
}