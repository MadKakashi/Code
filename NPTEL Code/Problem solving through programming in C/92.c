#include<stdio.h>


int main(){
    float item_cost[3];
    int item_sold[3];
    float total= 0.0 ;

    for (int i = 0 ; i<3 ; i++){
        scanf("%f %d",&item_cost[i],&item_sold[i]);
    }

    for (int j = 0 ; j<3 ; j++){
        total = total + ((item_cost[j])*(item_sold[j]));
    }

    printf("%f",total);


    return 0;
}