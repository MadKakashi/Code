#include<stdio.h>

int main(){
    int num,a;
    scanf("%d",&num);
    int elements = ((num*num)-num)/2;
    int counter1 = 0;
    int counter2 = 0;

    for (int i = 1 ; i<num+1 ; i++){
        for (int j = 1 ; j<num+1 ; j++){
            scanf("%d",&a);

            if ((i<j)&&(a==0)){
                counter1++;
            }

            if ((i>j)&&(a==0)){
                counter2++;
            }
        }}

        if ((counter1==elements)&&(counter2==elements)){
            printf("2");
        }
        else if (counter1==elements){
            printf("-1");
        }
        else if (counter2==elements){
            printf("1");
        }
        else {
            printf("0");
        }
    
    return 0;
}   