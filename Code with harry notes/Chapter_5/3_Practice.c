#include<stdio.h>
float force(float mAA);
int main(){
    float mass;
    printf("Enter the mass");
    scanf("%f",&mass);
    printf("Force  exerted is %f",force(mass));

    
    return 0;
}
float force(float mass){
    float force;
    force = mass*9.8;
    return force;
}