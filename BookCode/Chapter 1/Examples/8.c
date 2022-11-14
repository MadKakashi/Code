//multiplication of 2 (2d) array
#include<stdio.h>

int main(){
    int sum;
    int j1=1;
    int i2 = 1;
    int array[3][3];
    int array1[3][3];
    printf("Enter the first array:");
    for (int a = 1 ; a<=3 ; a++){
        for (int b = 1 ; b<=3 ; b++){
            scanf("%d",&array1[a][b]);
        }
    }

    
    printf("Enter the second array:");
    int array2[3][3];
    for (int a = 1 ; a<=3 ; a++){
        for (int b = 1 ; b<=3 ; b++){
            scanf("%d",&array2[a][b]);
        }}

    for (int i = 1 ; i<=3 ; i++){
        for (int j = 1 ; j<=3 ; j++){
                sum = 0;
                int i2=1; int j1=1;
                while (1){
                    sum+=array1[i][j1++]*array2[i2++][j];
                    if (j1==4){
                        break;
                    }
                        }
                        array[i][j] = sum;
                            }
                                }      
    
    for (int p = 1 ; p<=3 ;p++){
        for (int q = 1 ; q<=3 ; q++){
            printf("%d ",array[p][q]);
        }
        printf("\n");
    }
    
    return 0;
}