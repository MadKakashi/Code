//checking if two arrays are equal using while loop

#include<stdio.h>
#include <stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,3,3,4,5};
    int i = 0;
    int flag = 1;

    while (i<5){
        if (a[i]!=b[i]){
            flag = 0;
            printf("%d",flag);
            // break;
            exit (0);
        }
        i++;
    }

    printf("%d",flag);
    return 0;
}