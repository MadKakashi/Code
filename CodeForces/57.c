#include<stdio.h>

int main(){
    int tests,m,c;
    int mishika=0,chris=0;
    scanf("%d",&tests);

    for (int i = 0 ; i<tests ; i++){
        scanf("%d%d",&m,&c);
        if (m==c);
        if (m>c){
            mishika++;}
        if (m<c){
                chris++;
        }
        
    }
    if (mishika>chris){
        printf("Mishka");
    }
    else if (mishika<chris){
        printf("Chris");
    }
    else {
        printf("Friendship is magic!^^");
    }
    return 0;
}