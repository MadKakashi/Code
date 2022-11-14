#include<stdio.h>

int main(){
    int num_of_friends;
    scanf("%d",&num_of_friends);

    int array[num_of_friends];
    for (int i = 0 ; i<num_of_friends ; i++){
        scanf("%d",&array[i]);
    }

    int sum = 0 ;
    for (int i = 0 ; i<num_of_friends ; i++){
        sum += array[i];
    }

    int final_decompose = sum%(num_of_friends+1);
    int count = 0;
    for (int i = 1 ; i<6 ; i++){
        int t = final_decompose+i;
        t = t%(num_of_friends+1);

        if (t!=1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}