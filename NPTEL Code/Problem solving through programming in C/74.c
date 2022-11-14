#include<stdio.h>
// ***
// **
// *
int main(){
    int i,j;
    int N;
    scanf("%d",&N);

    for (i =1;i<=N;i++){
        for (j=1;j<=((N+1)-i);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
