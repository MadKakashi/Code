// #include<stdio.h>

// int main(){
//     long long test_cases;
//     long long a,b,i,j,counter;

//     scanf("%lld",&test_cases);

//     for (i=0 ; i<test_cases ; i++){
//         counter = 0;
//         scanf("%lld %lld",&a,&b);
//         for (j=a ; (a%b)!=0 ; a++,counter++);
//         printf("%lld\n",counter);

        
//     }

    
//     return 0;
// }

#include<stdio.h>

int main(){
    long long test_cases;
    long long a,b,i,j,counter;

    scanf("%lld",&test_cases);

    for (i=0 ; i<test_cases ; i++){
        scanf("%lld %lld",&a,&b);
        if (a%b==0){
            printf("0\n");
        }
        else {int quo = (a/b);
        printf("%lld\n",((quo+1)*(b))-a);}
    }
    return 0;
}
