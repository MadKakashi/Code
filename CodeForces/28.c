#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    scanf("%d",&num);

    int array[num];
    for (int i = 0 ; i<num ; i++){
        scanf("%d",&array[i]);
    }
     for (int i = 0 ; i<num ; i++){
        if (array[i]==1){
            printf("HARD");
            exit(0);
        }
    }
    printf("EASY");
    return 0;
}