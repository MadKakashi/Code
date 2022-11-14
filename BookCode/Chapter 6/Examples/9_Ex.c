#include<stdio.h>

int main(){
        int cmd;
        float balance=0.0f,credit,debit;
        printf("Welcome to Updesh Bank\n");
        printf("Commands: 0=clear,1=credit,2=debit");
        printf("3=balance,4=exit\n");
    for (;;){
        printf("Enter the command:");
        scanf("%d",&cmd);
        switch(cmd){
            case 0: balance=0.0f;
                    break;
            case 1: printf("Enter the amount of credit:");
                    scanf("%f",credit);
                    balance += credit;
                    break;
            case 2:printf("Enter the amount of debit:");
                    scanf("%f",debit);
                    balance -= debit;
                    break;
            case 3: printf("Balance:%f",balance);
                        break;
            case 4: return 0;
            default:printf("Commands: 0=clear,1=credit,2=debit");
                    printf("3=balance,4=exit\n");
                    break;

        }}
    return 0    ;
}           