#include<stdio.h>

int main(){
    int i=1,j=1,k=1;
    printf("%d ",++i||++j && ++k);
    printf("%d %d %d",i,j,k);

    return 0;
}
// 1 3 4 5
//0 7 8 9
// 1 8 8 9
// 
