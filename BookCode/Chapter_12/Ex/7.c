#include<stdio.h>
#include<stdbool.h>

bool search(const int array[],int n,int key){
    const int *p = array;

    for ( ; p<array+10 ; p++){
        if (*p==key){
            return true;
        }       
    }
    return false;
}

int main(){
    const int array[10] = {12,13,11,14,15,16,17,18,19,20};

    printf("%d",search(array,10,1));
    return 0;
}