#include<stdio.h>
int main()
{
int n, sum=0;
scanf("%d",&n); //Value of n is taken from the test cases 
for (;n>=1;){
    sum = sum + (n)*(n);
    n = n-2;
}
return 0;}