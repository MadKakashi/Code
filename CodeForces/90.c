#include<stdio.h>

int main(){
    int k;
    scanf("%d",&k);

    int array[12];
    for (int i = 0 ; i<12 ; i++){
        scanf("%d",&array[i]);
    }

    for (int i = 0 ; i<12 ; i++ ){
        for (int j = i + 1 ; j<12 ; j++){
            if (array[j]>array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    int j = 0;

    while(k>0){
        k -= array[j];
        j++;
        if (j==12) break;
    }

    if (k>0) printf("-1");
    else {
        printf("%d",j);
    }
    return 0;
}