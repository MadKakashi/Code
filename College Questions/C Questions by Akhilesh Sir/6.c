//wap to calculate the area and circumference

#include<stdio.h>

int main(){
    float radius,area,circumference;

    printf("Enter the radius:");
    scanf("%f",&radius);

    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    printf("The circumference is %f\n",circumference);
    printf("The area is %f",area);

    return 0;
}