 //function to find the factorial of a number inputted
 #include<stdio.h>

 int fact (int x){
     int res = 1;
     for(int i = 1 ; i<=x ; i++){
        res = res * i;

     }
     return res;
 }
 
 int main(){
    int a,result;
    scanf("%d",&a);
    printf("%d! is equal to %d",a,fact(a));
    return 0;
 }