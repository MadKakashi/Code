#include<stdio.h>

int main(){
    int rows,col;
    scanf("%d%d",&rows,&col);

    for (int i = 1 ; i<=rows ; i++){
        
        for (int j = 1 ; j<=col ; j++){

            if (i%2==1){
                printf("#");
            }

            else if (i%4!=0){
                if(j!=col){
                    printf(".");
                }
                else{
                    printf("#");
                }
            }

            else if (i%4==0){
                if (j==1){
                    printf("#");
                }
                else {
                    printf(".");
                }
            }
        }
        printf("\n");
        
    }
    return 0;
}