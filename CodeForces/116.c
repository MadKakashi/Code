#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];
    int col=0;
    int counter = 1;
    
    for (int i = 0 ; i<n ; i++){
        arr[0][col] = counter;
        if (col%2==0) counter += (2*n-1);
        else counter += 1;
        col++;
    }
    int row = 1;
    col = 0;

    for (int i = 0 ; i<n ; i++){
        row = 1;
        for (int j = 1 ; j<n ; j++){
            if (col%2==0)
            arr[row][col] = arr[row-1][col]+1;
            else
            arr[row][col]= arr[row-1][col]-1;
            row++;
        }
        col++;
    }

    for (int i  = 0; i<n ; i++){
        for (int j = 0 ; j<n ; j++){
            printf("%d",arr[i][j]);
            if (j!=n-1) printf(" ");
        }
        printf("\n");
    }


    return 0;
}