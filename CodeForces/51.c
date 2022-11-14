#include<stdio.h>

int main(){
    int friends,height_of_fence,a,width=0;
    scanf("%d %d",&friends,&height_of_fence);

    for (int i = 0 ; i<friends ; i++){
        scanf("%d",&a);
        if (height_of_fence<a){
            width += 2;
        }
        else {
            width += 1;
        }
    }
    printf("%d",width);
    return 0;
}