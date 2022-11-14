#include<stdio.h>

int main(){
    int n,m,count=0;
    scanf("%d%d",&n,&m);

    int max = m>n?m:n;

    for (int a = 0 ; a<=max ; a++){
        int b = n - (a*a);

         if (b*b == m - a ){//&& b>=0
            printf("%d %d\n",b,a);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}