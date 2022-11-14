#include<stdio.h>

int sum_array(int array[],int n){
    int *p;
    int sum = 0;

    for (p = &array[0];p<=array+9;p++){
        sum += *p;
    }
    return sum;
}

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d", sum_array(array,10));
    
    return 0;
}