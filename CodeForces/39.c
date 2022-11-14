#include<stdio.h>

int main(){
    int num,living,capacity;
    int counter = 0;
    scanf("%d ",&num);

    for (int i = 1 ; i<=num ; i++){
        scanf("%d%d",&living,&capacity);
        if (capacity-living>=2){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}