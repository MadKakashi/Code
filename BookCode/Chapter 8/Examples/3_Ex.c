#include<stdio.h>
#define N 5

int main(){
    int i;
    int a[N];
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}