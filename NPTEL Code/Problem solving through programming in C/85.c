#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,6};
    int b[5] = {1,2,3,4,5};
    int flag;

    for (int i = 0; i<5;i++){
        if(a[i]==b[i]){
            flag = 1;
            }
        else {
            flag = 0;
            break;
        }
    }
    printf("%d",flag);
    return 0;
}