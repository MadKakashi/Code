 #include<stdio.h>
 
 int main(){
    int i,j;
    int n;
    int a;
    float trace = 0.0;
    scanf("%d",&n);

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a);
            if (i==j){
                trace = trace + a;
            }
        }
    }
    printf("%f",trace);
     return 0;
 }