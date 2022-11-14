#include<stdio.h>


void accept(int arr[3][3]){
    int i,j;
    printf("Enter elements of 2d array:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
}

void display(int (*arr)[3]){
    int i , j;
    printf("Elements of array:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",*(*(arr+i)+j) );
        }
        printf("\n");
    }
}
int main(){
    int arr[3][3];
    accept(arr);
    display(arr);
    
   
    return 0;
}