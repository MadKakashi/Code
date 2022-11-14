#include<stdio.h>

int main(){
    int tests,elements,temp;
    scanf("%d",&tests);
   

    for (int i = 0 ; i<tests ; i++){
        int flag=0
        scanf("%d",&elements);
        int array[elements];

        for (int j = 0 ; j<elements ; j++){
            scanf("%d",&array[j]);
        }
        
        for (int v = 0 ; v<elements ; v++){
            for (int w = v+1 ; w<elements ; w++){
                if (array[v]>array[w]){
                    temp = array[v];
                    array[v] = array[w];
                    array[w] = temp;
                }
            }
        }

        // for (int xx = 0 ; xx<elements ; xx++){
        //     printf("%d ",array[xx]);
        // }

        for (int b = 0 ; b<(elements-1) ; b++){
            if ((array[b+1] - array[b])>=2){
                flag = 1;
                break;
            }
        }
   
    if (flag==1){printf("NO\n");}
    if (flag==0){printf("YES\n");}
    
   
    
    }
    return 0;
}