// #include<stdio.h>

// int main(){
//     int money,first,third,second,leftafter20,leftafter10,leftafter5,leftafter1;
//     printf("Enter the amount:");
//     scanf("%d",&money); // 93
//     first = money/20; // 4
//     printf("$20 bills: %d \n",first); //4
//     leftafter20 = (money) - (first)*(20); // 13
//     second = leftafter20/10; // 1
//     printf("$10 bills: %d \n",second); //1
//     leftafter10 = (leftafter20)-(second)*(10);//3
//     third = leftafter10/5;
//     printf("$5 bills : %d \n",third);
//     leftafter5 = leftafter10 - (third)*5;
//     printf("$1 bills : %d",leftafter5);
//     return 0;
// }

#include<stdio.h>

int main(){
    int money;
    printf("Enter the dollar amount: ");
    scanf("%d",&money);

    printf("$20 bills : %d\n",money/20);
    money -= 20*(money/20);
    printf("$10 bills : %d\n",money/10);
    money -= 10*(money/10);
    printf("$5 bills : %d \n",money/5);
    money -= 5*(money/5);
    printf("$1 bills : %d\n",money);
    return 0;
}