#include<stdio.h>

int main(){
    int n;
    int max_pos,min_pos;
    scanf("%d",&n);

    int array[n];

    for (int i = 0 ; i<n; i++){
        scanf("%d",&array[i]);
    }
    int max=0,min=array[0];

    for (int i = 0 ; i<n ; i++){
        if (array[i]>max){
            max = array[i];
        }
        if (array[i]<min){
            min = array[i];
        }
    }

    for (int i = 0 ;i<n ; i++){
        if (array[i]==max){
             max_pos = i;
             break;
            
        }

    }

     for (int i = 0 ; i<n ; i++){
        if (array[i]==min){
            min_pos = i;
            
       }   
    }
    //printf("%d %d\n",max_pos,min_pos);

    if (max_pos<min_pos){
        printf("%d",max_pos+(n-1-min_pos));
    }

    else {
        printf("%d",max_pos+(n-1-min_pos)-1);
    }

    return 0;
}