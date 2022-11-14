// // computes a universal product code check digit

// #include<stdio.h>

// int main(){
//     int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;

//     printf("Enter the first (single) digit:");
//     scanf("%1d",&d);
//     printf("%d",d);

//     // printf("Enter first group of five digits:");
//     // scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);

//     // printf("Enter second group of five digits:");
//     // scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);

//     // first_sum = d+i2+i4+j1+j3+j5;
//     // second_sum = i1+i3+i5+j2+j4;
//     // total = (3*first_sum)+second_sum;

//     // printf("Check digit: %d\n",9-((total-1)%10));
        

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i;
//     float f;

//     f = i = 33.3f;

//     printf("%d and %f",i,f);
//     return 0;
// #include<stdio.h>

// int main(){
//     int a=3,b=4,c=5;
//     a += b += c;
// // a+=(b+=c)
// //first bracket involves b=9
// //second does a=12
//     printf("%d %d %d",a,b,c);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a =5,b,c;
//     c = (b=a+2)-(a=1);
//     printf("%d",c);
//     return 0;
// }


#include<stdio.h>

int main(){
    int i=2,j;
    j = i++ * i;
    printf("%d",j);
    return 0;
}