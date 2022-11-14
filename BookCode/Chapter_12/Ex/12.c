#include<stdio.h>

void find_two_largest(const int *a,int n,int *largest,int *second_largest){
    const int *p = a;
    *largest = *second_largest = *a;

    while (++p<a+10){
        //printf("%d\n",*p);
        if (*p>*largest){
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p>*second_largest){
            *second_largest = *p;
        }
    }
    printf("%d %d",*largest,*second_largest);
}

int main(){
    int array[10] = {1,16,3,4,5,6,17,8,9,11};
    find_two_largest(array,10,array,array);

    return 0;
}