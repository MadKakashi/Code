//  find the average of 3 numbers using a function
#include<stdio.h>

float avg(int x,int y,int z){
    float sum;
    sum = x + y + z;
    sum = (x+y+z)/3.0;
    return ;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float result = avg(a,b,c);
    printf("%f",result);

    return 0;
}