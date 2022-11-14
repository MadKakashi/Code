#include <stdio.h>

float celcius(int a);

int main()
{
    float a;
    printf("Enter the temp");
    scanf("%f", &a);
    printf("The temp in far. is %f", celcius(a));

    return 0;
}
float celcius(int a)
{
    float c = a;
    c *= (float)9/5;
    c+=32;
    return c;
}