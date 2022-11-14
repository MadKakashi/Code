#include<stdio.h>

int main(){
    int num,i,j;
    long long first,second,counter=1;

    scanf("%lld",&num);

    int array[num];

    for (i = 0 ; i<num ; i++){
        scanf("%d",&array[i]);
    }
    
    for (j = 0 ; j<(num-1) ; j++){

        if (array[j] != array[j+1]){
            counter++;
        }
        
    }

    printf("%lld",counter);

    return 0;
}