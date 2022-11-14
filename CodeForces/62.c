#include<stdio.h>

int main(){
    int tests,a,b,c,d,k,pens,pencils;
    scanf("%d",&tests);

    for (int i = 0 ; i<tests ; i++){
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);

        if (a%c==0){
            pens = a/c;
        }
        else {
            pens = (a/c)+1;
        }

        if (b%d==0){
            pencils = b/d;
        }
        else {
            pencils = (b/d)+1;
        }

        //printf("%d %d",pens,pencils);

        if ((pens+pencils)<=k){
            printf("%d %d\n",pens,pencils);
        }
        else {
            printf("-1\n");
        }
    }


    return 0;
}