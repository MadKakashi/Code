#include<stdio.h>

int *find_middle (int *p,int n){
    return (p+(n/2));
}

int main(){
    int array[5];
    printf("%d\n",&array[2]);
    printf("%d",find_middle(array,5));
    return 0;
}