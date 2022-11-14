#include<stdio.h>

int main(){
    float dollars,tax,newamt;
    printf("Enter the amount:\n");
    scanf("%f",&dollars);
    tax = (0.05)*(dollars);
    newamt = tax + dollars;
    printf("The total amount is : %.2f\n",newamt);

    return 0;
}

#include<stdio.h>

int main(){
    float money;
    printf("Enter the money :");
    scanf("%f",&money);
    printf("Total amount is %.2f\n", (money)+((0.05f)*(money)));
    return 0;
}