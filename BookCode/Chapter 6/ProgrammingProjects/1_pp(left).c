// #include<stdio.h>

// int main(){
//     float a;
//     float largest;

//     do{
//         printf("Enter the number:");
//         scanf("%f",&a);

//         if (a>largest){
//             largest =a;
//         }

//     }while (a>0);
//     printf("The largest number is:%f",largest);
//     return 0;
// }

#include<stdio.h>

int main(){
    float a=1;
    float largest=0.0f;

    for (float a;a<=0;){
        printf("Enter:");
        scanf("%f",&a);

        if (a>largest){
            largest=a;
        }
        
    }
    printf("%d",largest);
    return 0;
}