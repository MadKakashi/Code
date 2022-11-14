//wap to calculate area of right angled triangle

#include<stdio.h>

int main(){
    float base,height,area;

    printf("Enter base(in m):");
    scanf("%f",&base);

    printf("Enter height(in m):R");
    scanf("%f",&height);

    area = (base*height)/2;
    printf("Area is %f square meter",area);

    return 0;
}