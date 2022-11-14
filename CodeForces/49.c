#include<stdio.h>

int main(){
    float n,m,a,b,sum=0;
    scanf("%f%f%f%f",&n,&m,&a,&b);
    
    if (b/m<a){
        if (n==1){
            if (a<b){
                printf("%d",a);
            }
            else {
                printf("%d",b);
            }
        }
        else{
        do{
            n -= m;
            sum += b;

        }while (n>=m);}
      // printf("%f %f",n,sum);
        if ((n*b<a)&&(n!=0)){ sum+=b;}
        
        else{
        while(n>0){
            sum += a;
            n--;
        }
        
    }
        //printf("%f %f",n,sum);
    }else{
        while(n>0){
            sum+= a;
            n--;
        }
    }
    printf("%d",(int)sum);
    return 0;
}