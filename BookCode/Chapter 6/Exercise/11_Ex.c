#include<stdio.h>

int main(){
    sum=0;
    for (i=0;i<10;i++){
        if (i%2)
        {continue;}
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
sum = 0+2++4+6+8+