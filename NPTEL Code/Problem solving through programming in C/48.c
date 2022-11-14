// roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int  root1;
    printf("Enter the coefficient of x^2:");
    scanf("%d", &a);

    printf("Enter the coefficient of x:");
    scanf("%d", &b);

    printf("Enter the constant:");
    scanf("%d", &c);

    float D = (b * b) - (4 * a * c);
    //printf("%f\n",D);

    if (D > 0)
    {
        printf("Real roots\n");
        printf("%f %f", ((-b + sqrt(D)) / (2 * a)), ((-b - sqrt(D)) /( 2 * a)));
    }
     if (D == 0)
    {
        // root1 = float((-(b)) / (2 * a));
        printf("Equal roots\n");
        // printf("%f %f",root1, root1);
        printf("%f",(float)(-b)/(2*a));
        //printf("%f",root1);
    }
    else
    {
        printf("Imaginary roots\n");
        
        printf("%d+i%d",((-b)/2*a),(sqrt(-D)/(2*a))); 
    }
    return 0;
}