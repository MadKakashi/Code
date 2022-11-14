#include<stdio.h>

int main(){
    float amount;
    printf("Enter value of trade:");
    scanf("%f",&amount);
    if (amount<2500){
        printf("%f",30+((1.7/100)*amount));
    }
    else if (amount<=6250){
        printf("%f",56+((0.66/100)*amount));
    }
    else if (amount<=20000){
        printf("%f",76+((.34/100)*amount));
    }
    else if (amount<=50000){
        printf("%f",100+((.22/100)*amount));
    }
    else if (amount<500000){
        printf("%f",155+((.11/100)*amount));
    }
    else if (amount>=500000){
        printf("%f",255+((.09/100)*amount));
    }
    if (amount<39){
        printf("%d",39);
    }
    return 0;
}
