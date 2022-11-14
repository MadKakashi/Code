#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,i;
    scanf("%d",&num);

    for (i = 1 ; i<=num ; i++){
        if (num == ((i)*(i+1))/2){
            printf("YES");
            exit(0);
        }
    }
    
    printf("NO");

    
    return 0;
}