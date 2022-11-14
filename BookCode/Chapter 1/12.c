#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n][n];

    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<n ; j++){
            array[i][j] = 0 ;
        }
    }

    int row = 0;
    int col = (n/2);
    array[row][col] = 1;

    for (int i = 2 ; i<=n*n;i++){
        if ((row-1>=0 && row-1<=n-1)&&(col+1>=0 && col+1<=n-1)&&(array[row-1][col+1]==0)){
            array[--row][++col] = i;
        }

        else if (row==0 && col==n-1 && array[n-1][0]==0){
            row = n-1;
            col = 0;
            array[row][col] = i;
        }

        else if (row==0 && array[n-1][col+1]==0 ){
            row = n-1;
            array[row][++col] = i;
        }

        else if (col==n-1 && row-1>=0 && row-1<=n-1 && array[row-1][0]==0 ){
            col = 0;
            array[--row][col] = i;
        }

        else {  
                array[++row][col] = i;
        }   
    }
    
    printf("\n");
    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<n; j++){
           printf("%3d" ,array[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}