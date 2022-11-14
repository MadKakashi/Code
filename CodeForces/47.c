#include<stdio.h>

int main(){
    long long citizens,max=0,sum=0;
    scanf("%lld",&citizens);
    long long array[citizens];

    for (int i = 0 ; i<citizens ; i++){
        scanf("%lld",&array[i]);
        if (array[i]>max){
            max = array[i];
        }
    }

    for (int j = 0 ; j<citizens ; j++){
        sum += (max-array[j]);
    }
    printf("%lld",sum);
    
    return 0;
}