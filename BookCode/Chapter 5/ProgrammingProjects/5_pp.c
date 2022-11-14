#include<stdio.h>

int main(){
    float income;
    printf("Enter income:");
    scanf("%f",&income);

     if (income<750){
        printf("%.2f",(0.01)*(income));
        }
    else if (income<=2250){
        printf("%.2f",(7.5)+(.02)*((income)-750));
    }
    else if (income<=3750){
        printf("%.2f",(37.5)+(.03)*(income-2250));
    }
    else if (income<=7000){
        printf("%.2f",(142.5)+(.05)*(income-5250));
    }
    else {printf("%.2f",230+(.06)*(income-7000));}
    return 0;
}