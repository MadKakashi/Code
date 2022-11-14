#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);

    long long array[n];

    for (int i = 0 ; i<n ; i++){
        scanf("%lld",&array[i]);
    }

    long long min = array[0];
    long long position;

    for (long long i = 0 ; i<n ; i++){
        if (array[i]<=min){
            min = array[i];
            position = i;
        }
    }
    long long counter=0;
    for (long long i = 0 ; i<n ; i++){
        if (array[i]==min){
            counter++;
        }
    }

    if (counter==1){
        printf("%d",position+1);
    }
    else{
        printf("Still Rozdil");
    }

    
    return 0;
}