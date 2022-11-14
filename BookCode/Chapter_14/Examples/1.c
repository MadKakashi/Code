#include<stdio.h>

#define FUNCTION_CALLED() printf("%s called\n",__func__)
#define FUNCTION_RETURN() printf("%s returns\n",__func__)



int sum(int a , int b){
    FUNCTION_CALLED();
    int sum = a + b;
    
    return a;
    FUNCTION_RETURN();
}

int main(){
    FUNCTION_CALLED();
    printf("%d\n",sum(3,4));
    


    FUNCTION_RETURN();
    return 0;

}