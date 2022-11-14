//compute the pairwise average of three numbers

#include<stdio.h>

double average(double a, double b){
    return (a+b)/2;
}

int main(){
    float x,y,z;

    printf("Enter three numbers:");
    scanf("%1g%1g%1g",&x,&y,&z);
    printf("Average of %g and %g: %g\n",x,y,average(x,y));
    printf("Average of %g and %g: %g\n",y,z,average(y,z));
    printf("Average of %g and %g: %g\n",x,z,average(x,z));


    
    return 0;
}