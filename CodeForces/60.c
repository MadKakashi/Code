#include<stdio.h>

int main(){
    long long tests,temp,toequal;
    long long array[4];
    scanf("%lld",&tests);


    for (long long i = 0 ; i<tests ; i++){
        for (long long j = 0 ; j<4 ; j++){
            scanf("%lld",&array[j]);
        }
        for (long long x = 0 ; x<3 ; x++){
            for (long long y = x+1 ; y<3 ; y++ ){
                if (array[x]>array[y]){
                    temp = array[x];
                    array[x] = array[y];
                    array[y] = temp;
                } 
            }
        }

        // for (long long v = 0 ; v<4 ; v++){
        //     printf("%lld ",array[v]);
        // }

        
        toequal = (2*array[2]) - array[0] - array[1];
        array[3] = array[3] - toequal;

        // printf("\n%lld",toequal);

        if (array[3]%3==0 && array[3]>=0){
            printf("YES\n");
        }        
        else {
            printf("NO\n");
        }

        

    }
    return 0;
}