#include<stdio.h>
#define PI 3.14

float function_for_area(float rad);

int main(){
    float radius,area;
    scanf("%f",&radius);
    area = function_for_area(radius);
    printf("%f",area);
    return 0;
}
float function_for_area(float rad)

{
    float answer;
    answer = rad * rad * PI;
    return answer;

}
