#include<stdio.h>

int main(){
    int tests,elements,a,badeven,badodd;
    scanf("%d",&tests);

    for (int i = 0 ; i<tests ; i++){
        scanf("%d",&elements);
        int badeven=0,badodd=0;
        int array[elements];
        for (int j = 0 ; j<elements ; j++){
            scanf("%d",&a);
            if (j%2==0){
               if (a%2==0);
               else {
                    badeven++;
               }
            }
            else {
               
               if (a%2==0){
                   badodd++;
               }     
                }
                 }
       
        if (badeven==badodd){
            printf("%d\n",badeven);
        }
        else {
            printf("-1\n");
        }
        
    }
    return 0;
}