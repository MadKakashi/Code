#include<stdio.h>

int main(){
    int n;
    scanf("%d ",&n);
    int array[n];
    int max = 0,counter=0,min=0;

    for (int i = 0 ; i<n ; i++){
        scanf("%d",&array[i]);
        if (i==0){
            max = array[0];
            min = array[0];
        }
        if (i>=1 && array[i]>max ){
            max = array[i];
            counter++;
        }
        if (i>=1 && min>array[i]){
            min = array[i];
            counter++;
        }
    }
    printf("%d",counter);
   
    return 0;
}