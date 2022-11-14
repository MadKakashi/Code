#include <stdio.h>
int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); /*Three numbers are accepted from the test case */
    if ((n1>n2)&&(n1>n3)){
    printf("%d is the largest number.", n1);    
    }

    else if ((n2>n1)&&(n2>n3)){
        printf("%d is the largest number.", n2);
    }

    else {
        printf("%d is the largest number.", n3);
    }
}





    

