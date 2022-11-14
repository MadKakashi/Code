#include<stdio.h>

int main(){

    int prev,curr;
    int i = 0;
    scanf("%d",&prev);
    scanf("%d",&curr);
    while (curr!=-1){
        if (prev<curr){
            i++;
        }
        if (prev>curr){
            i++;
        }  
    scanf("%d",&curr);
    }

    if (i>=3){
        printf("1");
    }
    else {
        printf("0");
    }


    return 0;
}