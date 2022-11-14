#include<stdio.h>

int main(){
    int a,b,c,d,max,min,max1,min1,max2,min2;
    printf("Enter four integer:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b){
        max1=a; min1=b;
    }else {max1=b;min1=a;}

    if (c>d){
        max2=c;min2=d;
    }else{max2=d;min2=c;}

    if(max1>max2){
        max=max1;
    }else{max=max2;}

    if(min1<min2){
        min=min1;    }else{min=min2;}

    printf("Largest=%d\nSmallest=%d",max,min);


    return 0;
}
