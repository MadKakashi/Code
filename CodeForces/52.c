#include<stdio.h>

int main(){
    long long array[4];
    long long temp,counter=0;
    for (long long i = 0 ; i<4 ; i++){
        scanf("%lld",&array[i]);
    }
    

    for (long long j = 0 ; j<4 ; j++){
        for (long long x = j+1 ; x<4 ; x++){
            if (array[j]>array[x]){
                    temp = array[j];
                    array[j] = array[x];
                    array[x] = temp;
            }
        }
    }
    
    for (long long v = 0 ; v<3 ; v++){
        if (array[v]==array[v+1]){
            counter++;
        }
    }
    printf("%lld",counter);
    return 0;
}