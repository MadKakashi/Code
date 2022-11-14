 //using while to read int and output it untill -1 is seen

 #include<stdio.h>
 
 int main(){
    int a;
    scanf("%d",&a);

    while (a!=-1){
        printf("%d",a);
        scanf("%d",&a);
    }
    printf("%d",a);
     return 0;
 }