#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    printf("The area of the circle is %f\n", pi * radius * radius);
    int height = 4;
    printf("the volume is %f\n", pi * radius * radius * height);

    return 0;
}

// #include<stdio.h>

// int main(){
//     int radius, height;
//     float pi = 3.14;
//     printf("enter the radius \n");
//     scanf("%d", &radius);
//     printf("enter the height \n");
//     scanf("%d",&height);
//     printf("the area of the circle is %f\n", pi*radius*radius);
//     printf("the volume of cylinder is %f", pi*radius*radius*height);
//     return 0;
// }