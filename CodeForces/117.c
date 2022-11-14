#include <stdio.h>
 
int main()
{
    int n, num_100 = 0, num_200 = 0;
    scanf("%d", &n);
 
    int wt;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &wt);
        if (wt == 100)
            num_100++;
        else
            num_200++;
    }

    int t = num_100%2;
    int v= num_200%2;

    if (t%2==0 && v==0) printf("YES");
    else if (t==1 && v==1) printf("NO");
    else if(t==1 && v==0) printf("NO");
    else if(t==0 && v==1 && num_100>=2) printf("YES");
    else printf("NO");
 
    return 0;
}