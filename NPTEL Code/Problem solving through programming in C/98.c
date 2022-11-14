//checking if two arrays are equal using while loop
#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,4};
    int b[5] = {1,2,3,4,4};
    int i = 0;
    int j = 0;

    while((a[i]==b[i])&&(i<5)){ //while statement will keep checking the array element by element if they are equal
       
        j++; //increasing j so that we can track how many times this iteration has been performed keeping cond in check
        i++; //
    }

    if (j==5){ //during the loop, if "i" succesfully reached 4 then it means that the array are equal
        printf("Equal");
    }
    else {
        printf("Not equal"); //else they are unequal
    }
    return 0;
}