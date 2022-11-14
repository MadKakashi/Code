#include<stdio.h>

int main(){
    float commission,value;
    
    

    printf("Enter value of trade:");
    scanf("%f",&value);
    while (value>0){    
    if (value<2500.0){
        commission =30+(.017*value);
    }
    else if (value<6250){
        commission = 56+(.0066*value);
    }
    else if (value<20000){
        commission = 76+(.0034*value);
    }
    else if (value<50000){
        commission = 100.0f+(.0022*value);
    }
    else if (value<500000){
        commission = 155+(.0011*value);
    }
    if (commission<39){
        commission =39;
    }
    printf("Commission:%f\n\nEnter value of trade:",commission);
    scanf("%f,&value");
    return 0;}
}





