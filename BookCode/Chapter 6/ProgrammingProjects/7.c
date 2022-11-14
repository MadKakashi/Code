#include<stdio.h>

int main(){
    int num;
    printf("Enter the number of entries in table");
    scanf("%d",&num);
    for (int i = 1 ; i<=num ; i++){
        printf("%d - %d\n",i,i*i);
    }
    return 0;
}