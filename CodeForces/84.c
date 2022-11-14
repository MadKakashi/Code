#include<stdio.h>

int main(){
    long long num_of_house,tasks,counter=0,house;
    scanf("%lld%lld",&num_of_house,&tasks);
    int current_pos = 1;
    for (long long i = 0 ; i<tasks ; i++){
        scanf("%lld",&house);
        if (house>current_pos){
            counter += house-current_pos;
            current_pos = house;
        }
        else if (house==current_pos);
        else {
            counter+=(num_of_house-current_pos+1)+(house-1);
            current_pos = house;
        }

    }
    printf("%lld",counter);

    return 0;
}