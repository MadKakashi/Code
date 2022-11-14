// #include<stdio.h>

// int main(){
//     float amount;
//     printf("Enter value of trade:");
//     scanf("%f",&amount);
//     if (amount<2500){
//         printf("%f",30+((1.7/100)*amount));
//     }
//     else if (amount<=6250 && amount>=2500){
//         printf("%f",56+((0.66/100)*amount));
//     }
//     else if (amount<=20000 && amount>6250){
//         printf("%f",76+((.34/100)*amount));
//     }
//     else if (amount<=50000 && amount>20000){
//         printf("%f",100+((.22/100)*amount));
//     }
//     else if (amount<500000 && amount>50000){
//         printf("%f",155+((.11/100)*amount));
//     }
//     else if (amount>=500000){
//         printf("%f",255+((.09/100)*amount));
//     }
//     if (amount<39){
//         printf("%d",39)
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    float commission,value;

    printf("Enter value of trade:");
    scanf("%f",&value);

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
    printf("%f",commission);
    return 0;
}


