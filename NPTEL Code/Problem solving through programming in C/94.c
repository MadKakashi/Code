#include<stdio.h>

int main(){
    int list[5] = {1,2,3,4,1};
    int key = 1;
    int i;
    int found = 0;
    int counter = 0;

    for (i=0;i<5;i++){
        if (list[i]==key){
            found = 1;
            printf("Key found at %d\n",i);
            counter++;
        }

    }
    if (counter>=1){
        printf("The number was found %d times",counter);
    }
    
    if (counter  = 0){
        printf("Key was not found");
    }
    return 0;
}