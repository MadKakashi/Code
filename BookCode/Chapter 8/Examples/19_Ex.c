#include<stdio.h>

int main(){
    int c[10] = {5,1,9,[4]=3,5,[9]=6};
    for (int i =0;i<10;i++){
        printf("%d ",c[i]);
    }
    return 0;
}