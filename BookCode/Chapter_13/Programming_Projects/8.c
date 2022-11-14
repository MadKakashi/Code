#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(char *word)
{
    char *face_values[] = {"AEILNORSTRU", "DG", "BCMP", "FHVWY", "K", "JX", "QZ"};
    char *p = word;
    int sum = 0, i;

    for (; *p; p++)
    {
        for (i = 0; i < 7; i++)
        {
            char *q = face_values[i];
            while (*q)
            {
                if (*p == *q)
                {
                    switch (i){
                    case 0:{sum += 1; break;}
                    case 1:{sum += 2; break;}
                    case 2:{sum += 3; break;}
                    case 3:{sum += 4; break;}
                    case 4:{sum += 5; break;}
                    case 5:{sum += 8; break;}
                    case 6:{sum += 9;break;}
                    }
                }
                q++;
            }
        }
    }

    return sum;
}
void capital(char* word){
    char *p = word;
    while(*p){
        *p = toupper(*p);
        p++;
    }
}
int main()
{
    char word[] = "piTfaLL";
    capital(word);
    printf("%d", compute_scrabble_value(word));
    return 0;
}