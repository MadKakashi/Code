#include<stdio.h>

int main(){
    int num,a,b,c;
    int counter = 0; 

    scanf("%d",&num);

    for (int i = 0 ; i<num ; i++){
        scanf(" %d%d%d",&a,&b,&c);
        if (a+b+c>=2){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}