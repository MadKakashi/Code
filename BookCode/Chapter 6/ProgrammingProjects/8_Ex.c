#include<stdio.h>

int main(){
    int days,start_day;
    printf("Enter number of days in month:");
    scanf("%d",&days);
    printf("Enter starting day of the week(1=Sun,7-Sat):");
    scanf("%d",&start_day);
    for (int i = 1 ; i<start_day ; i++){
        printf("   ");
    }
    for (int j = 1; j<=days ; j++){
        printf("%3d",j);
        if ((j+start_day-1)%7==0){
            printf("\n");
        }
    }
    return 0;
}