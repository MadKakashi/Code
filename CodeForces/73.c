#include<stdio.h>
#include <stdlib.h>

int main(){
    int array[4];

    for (int i = 0 ; i<4 ; i++){
        scanf("%d",&array[i]);
    }

    long long dragons;
    scanf("%lld",&dragons);

    int counts[dragons+1];

    for (int i = 0 ; i<=dragons ; i++){
        counts[i] = 0;
    }

    for (int i = 1 ; i <= dragons ; i++){
        if (i%array[0]==0){
            counts[i] = 1;
        }
        else if (i%array[1]==0){
            counts[i] = 1;
        }
        else if (i%array[2]==0){
            counts[i] = 1;
        }
        else if (i%array[3]==0){
            counts[i] = 1;
        
        }
    }
    long long sum = 0;
    for (int i = 1 ; i <= dragons ; i++){
        sum += counts[i];
   
    }

    printf("%lld",sum);
    return 0;
    }

