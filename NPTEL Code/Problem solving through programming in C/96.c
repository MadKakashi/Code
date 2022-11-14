//checking if two arrays are equal using for loop
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};

    for (int i = 0 ; i<5 ; i++){
        if (a[i]==b[i]){
            if (i==4){  //if the var i has reached the last element then both the array are equal
                printf("Equal");
            }
        }
        else {
            printf("Not equal");
            break; //as soon as the elements become unequal we use break as furthur inspection is not required
        }
    }
    
    return 0;
}