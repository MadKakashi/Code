
#include<stdio.h>

 int main(){
    int i,sum=0; 
    scanf("%d",&i);

    while (i!=-1){
        sum = i+sum;
        scanf("%d",&i);
        
    }
    printf("%d",sum);
    return 0;
}

