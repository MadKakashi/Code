#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0];
    int *q = &a[9];
    int temp;

    while (p<q){
        temp = *p; //temp = 1
        *p++ = *q; // *p = 10
        *q-- = temp; //*q = 1
    }
    return 0;
} //{10,9,8,7,6,5,4,3,2,1}