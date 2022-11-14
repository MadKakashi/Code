//compute the area of a circle
#include<stdio.h>
#define PI 3.141
int main(){
    float radius,area;
    float myfunc(float radius);

    scanf("%f",&radius); //read the value of the radius
    area = myfunc(radius); //the function is called 
    printf("Area is %f",area); //the value of the area is printed

    
    return 0;
}
//function is declared
float myfunc(float r){ //here is radius from the main function is being connected to r
    float a;
    a = PI *r*r;
    return (a); //this statement returns result
} //the 'a' variable is being connected to 'area' variable in the main
//this function is only concerned with r and a