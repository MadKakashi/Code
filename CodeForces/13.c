#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,row,col,counter=0;
    int counter1, counter2;

    for (int i = 1 ; i <= 5 ; i++){
        for (int j = 1 ; j<=5  ;j++){
            scanf("%d",&a);
            if (a==1){
                row = i;
                col = j;
            }
        }
    }
    if (row==3 && col==3){
        printf("0");
        exit(0);
    }
    if (row >3){
        counter1 =  row - 3;
    }
    else {
        counter1 = 3 - row;
    }
    if (col >3){
        counter2 =  col - 3;
    }
    else {
        counter2 = 3 - col;
    }
    printf("%d",counter1+counter2);


    return 0;
}