#include <stdio.h>
int main()
{
int base, exponent;
long int result;
scanf("%d", &base); //The base value is taken from test case
scanf("%d", &exponent);  //The exponent value is taken from test case
int n=1;
for (result =1;n<=exponent;n++){
    result = result * base;
}
printf("%d",result);
return 0;
}