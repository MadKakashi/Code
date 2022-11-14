#include <stdio.h>
#include <math.h>
int main()
{

    int n, m, c;

    scanf("%d%d", &n, &m);

    int a, b;
    int counter = 0;
    for (a = 0; a <= sqrt(n); a++)
    {
        for (b = 0; b <= sqrt(m); b++)
        {
           if (((a * a) + b == n) && (a + (b * b)) == m)
                counter++;
        }
    }
    printf("%d", counter);
}