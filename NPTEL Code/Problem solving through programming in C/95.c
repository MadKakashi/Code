#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {3,2,3,4,5};
    int flag = 1;

    for (int i = 0 ; i<5 ; i++){
        if (a[i]==b[i]){
            flag = 1;
        }
        else {
            flag = 0;
            printf("%d",flag);
            exit(0);
        }
    }
    printf("%d",flag);
    return 0;
}