#include<stdio.h>

int main(){
    int n,a,b,count=0;
    scanf("%d%d%d",&n,&a,&b);

    for (int pos = 1 ; pos<=n ; pos++){
        int ahead = pos - 1;
        int behind = n - ahead - 1;
       // printf("%d>=%d %d<=%d\n",ahead,a,behind,b);
        if (ahead>=a && behind<=b){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}