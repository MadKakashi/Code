#include<stdio.h>
#define subjects 6

int main(){
    int grade_point[subjects],credits[subjects];
    int grade_sum =0,credits_sum=0;

    printf("Enter the grade points and credits:");
    for(int i =0;i<subjects;i++){
        scanf("%d %d",&grade_point[i],&credits[i]);
    }

    for (int j = 0;j<subjects;j++){
        grade_sum += (credits[j] *grade_point[j]);
        credits_sum = credits_sum+ credits[j];
        
    }

    float gpa = (grade_sum*10.0)/(credits_sum*10.0);
    printf("%f",gpa);
    return 0;
}