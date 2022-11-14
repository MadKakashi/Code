#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); 
    scanf("%d",&c); 

    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }

    int a,b,sum;
    for ( a = 0; a<r;a++){
        sum = 0;
        for (b = 0 ; b<c ; b++){
        
            
            sum = sum + matrix[a][b];
        }
        printf("%d\n",sum);

    
    }

    return 0;
}