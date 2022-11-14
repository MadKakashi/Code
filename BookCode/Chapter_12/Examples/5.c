#include<stdio.h>

void Accept(int arr[]){
    printf("Enter array elements:\n");

    for (int i = 0 ; i<5 ; i++){
        scanf("%d",arr+i);
    }
}

void Display(int *arr){
    printf("Array elements are:");
    for (int i = 0 ; i<5 ; i++){
        printf("%d ",*(arr+i));
    }
}

int main(){
    int arr[5];
    Accept(arr);
    Display(arr);
    return 0;
}