#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    int array[n];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
 
    int t = array[0];
 
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            array[n - 1] = abs(array[n - 1] - t);
        }
        else
            array[i] = abs(array[i + 1] - array[i]);
    }
 
    int min = array[0];
    int ans;
 
    for (int i = 0; i < n; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
            ans = i;
        }
    }
 
    if (ans == n - 1)
    {
        printf("%d %d", n, 1);
    }
 
    else
    {
        printf("%d %d", ans + 1, ans + 2);
    }
    return 0;
}