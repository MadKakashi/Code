#include<stdio.h>

int find_largest(int array[] , int n){
    int *p = array;
    int max = *(p++);
    while (p++<array+n){
        if (max<*p){
            max  = *p;       
            }
    }
    return max;
}

int main(){
    int array[10] = {1,2,3,4,5,4,3,22,2};
    printf("%d",find_largest(array,10));
    return 0;
}