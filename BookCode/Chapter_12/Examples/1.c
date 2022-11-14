//using pointers to sum all the elements of array
#include<stdio.h>
#define N 10

int main(){
    int a[N]  = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    int sum = 0;

    for (p = &a[0] ; p<&a[10] ; p++){
        sum += *p;
    }


    printf("%d",sum);

    return 0;
}