#include <stdio.h>

int main()
{
    long long n,num;
   scanf("%lld", &n);

    long long arr[100001];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld",&num);
        arr[num] = i + 1;
    }

    int tests,count1=0,count2=0;
    scanf("%lld", &tests);

    for (long long i = 0; i < tests; i++)
    {
        long long m;

        scanf("%lld",&m);
        count1 += arr[m];
        count2 +=  n -arr[m] + 1;
        
    }

    printf("%lld %lld", count1, count2);
    return 0;
}