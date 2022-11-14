#include<stdio.h>

int main(){
    long long tests,elements,max,min;
    scanf("%lld",&tests);

    for (long long i = 0 ; i<tests ; i++){
        max = 0;
        scanf("%lld",&elements);
        long long array[elements];

        for (long long j = 0 ; j<elements ; j++){
            scanf("%lld",&array[j]);
        }
        min = array[0];
        for (long long t = 0 ; t<elements ; t++){
            if (array[t]>max){
                max = array[t];
            }
            if (array[t]<min){
                min = array[t];
            }
        }
        printf("%lld\n",max-min);
        
    }
    return 0;
}