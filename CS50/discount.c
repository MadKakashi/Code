// #include<stdio.h>
// #include<cs50.c>

// int main(){

//     float regular = get_float("Regular price:");
//     float sale = regular * .85;

//     printf("Sale price: %.2f\n",sale);
    
//     return 0;
// }

#include<stdio.h>
#include<cs50.c>

float discount(float price,int percentage);

int main(){

    float regular = get_float("Regular Price:");
    int percent_off = get_int("Percent off:");
    float sale = discount(regular,percent_off);

    printf("Sale price:%.2f",sale);

    
    return 0;
}

float discount(float price,int percentage){

    return price*(100-percentage)/100;
 //   return sale;

}