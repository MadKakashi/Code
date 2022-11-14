#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int array[n][n];
    int *p = &array[0][0];
    int zeros = n;

    while (p<(&array[0][0]+(n*n))){
        if (zeros==n) {
                *p = 1;
                zeros = 0;
        }
        else{
            *p = 0 ;
            zeros++;
        }
        printf("%d ",zeros);
        p++;
    }
    printf("\n\n");

    // for (int i = 0 ; i<n ; i++){
    //     for (int j = 0 ; j<n ; j++){
    //         printf("%d ",array[i][j]);
    //     }
    //     printf("\n");
    // }


    int* start = &array[0][0];
    int i = 1 ;
    while (i<=n*n){
        printf("%d ",*start);
        if (i%n==0){
            printf("\n");
        }
        i++;
        *start++;
    }

    
    
    return 0;
}