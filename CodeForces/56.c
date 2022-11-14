#include<stdio.h>

int main(){
    int tests,elements,odd;
    scanf("%d",&tests);

    for (int i = 0 ; i<tests ; i++){
        scanf("%d",&elements);
        int array[elements];
        for (int j = 0 ; j<elements ; j++){
            scanf("%d",&array[j]);
        }
        for (int x = 0 ; x<elements-1; x++){
            if (array[0]!=array[x+1]){
                odd = x+1;
            }
        }
        if (array[0]==array[odd-1]){
            printf("%d\n",odd+1);
        }
        else {

            printf("1\n");
        }
    }
    return 0;
}