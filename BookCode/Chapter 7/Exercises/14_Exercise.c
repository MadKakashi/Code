#include<stdio.h>

int main(){
    float f,fract_part;

    printf("Enter a number:");
    scanf("%f",&f);

    fract_part = f- (int)f;
    printf("Fractional part: %f",fract_part);
    return 0;
}