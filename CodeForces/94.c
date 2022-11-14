#include <stdio.h>
#include <string.h>

#define ex ((*p+*(p + 1))+*(p + 2)+*(p + 3)+*(p + 4)+*(p + 5)+*(p + 6))

int main()
{
    char str[100] = {0};
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i <=len-7 ; i++)
    {
        char *p = str + i;
        if ((ex==(48*7))||(ex==(49*7))){
            printf("YES");
            return 0;
        }
    }

    printf("NO");
    return 0;
}