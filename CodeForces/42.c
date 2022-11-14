#include<stdio.h>

int main(){
    int red,blue,min,max;
    scanf("%d%d",&red,&blue);

    if (red>blue){
        min = blue;
        max = red;
    }
    else{
        min = red;
        max = blue;
    }
    printf("%d ",min);
    printf("%d",(max-min)/2);
    return 0;
}