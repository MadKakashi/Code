// #include <stdio.h>

// int main()
// {
//     long long n;
//     scanf("%lld", &n);

//     long long i = 0;
//     long long j = 1;
//     long long z = i + j;

//     if (n==0){
//         printf("0 0 0");
//         return 0;
//     }

//     if (z < n)
//     {
//         while (z != n)
//         {
//             i = j;
//             j = z;
//             z = i + j;
//         }
//     }

//     printf("%lld %lld 0", i, j);

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int m = n;
    int q = n;
    int count = 1;
    int sum = 0;
    while ((n=n/10) != 0) count++;
    
    printf("User entered %d digit number\n", count);

    while (m){   
        // sum += (int)pow(m%10,count);   d
        printf("%f\n",pow(m%10,count));
        m /= 10;   
    }  
    
    if (sum == q) printf("\nThe entered number is armstrong no.");
    
    else printf("\nThe entered number is not armstrong no.");
    return 0;
}