#include<stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int array[m];
    for (int i = 0 ; i<m ; i++){
        scanf("%d",&array[i]);
    }

    for (int i = 0 ; i<m ; i++ ){
        for (int j = i + 1 ; j<m ; j++){
            if (array[j]<array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    int sum = 0 ;
    for (int i = 0 ; i<n ; i++){
        if (array[i]>0){
            break;
        }
        sum += array[i];
    }

    if (sum<0){
        printf("%d",-sum);
    }
    else{
        printf("0");
    }
    
    return 0;
}