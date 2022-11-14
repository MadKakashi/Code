//checking if two arrays are equal using while loop

#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    int i = 0;
    while (i<5){
        if (a[i]!=b[i]){
            printf("Not equal");
            break;
        }
        if (i==4){
            printf("Equal");
        }
        i = i+1;
    }
    return 0;
}