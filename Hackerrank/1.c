#include <stdio.h>
#include <stdlib.h>

char* larrysArray(int A_count, int *A)
{

    int *searching;
    int *p = A; // p is pointing to the first element of array
    for (int i = 0; i < A_count - 2; i++)
    {
        //searching the (i+1) element in the array
        searching = A; 
        for (int j = 0; j < A_count; j++)
        { 
            if (*searching == i + 1) break;
            searching++;
        }
        //dont' do any thing if the required element is already present
        if (*p == i + 1);

        else
        {   // determine pos of element
            int *initial_pos = searching;
            // determine pos of the destination
            int *final_pos = p;
            int difference = (int)(initial_pos - final_pos);

            if (difference % 2 != 0) //difference is odd
            {   int temp = *initial_pos;
                if (difference!=1){
                for (int i = 1; i <= difference - 2; i++)
                {
                    *(initial_pos) = *(initial_pos - 1);
                    initial_pos--;
                }
                *initial_pos = *final_pos;
                *final_pos = temp;
                }
                else{
                    int temp = *initial_pos;
                    *initial_pos = *(initial_pos+1);
                    *(initial_pos+1) = *(initial_pos-1);
                    *(initial_pos-1) = temp;
                }
            }

            else //difference is even
            {   int temp = *initial_pos;
                for (int i = 1; i <= difference ; i++)
                {
                    *(initial_pos) = *(initial_pos - 1);
                    initial_pos--;
                }
                *final_pos = temp;
            }
        }
    p++;
    }

    // for (int i = 0 ; i<A_count ; i++){
    //     printf("%d ",A[i]);
    // }

    char* s = malloc(100 * sizeof(char));
    if (A[A_count-1]==A_count) s = "YES";
    else s = "NO";
    return s;
}



int main()
{
    int A[] = {3 ,1,2};
    printf("%s",larrysArray(3,A));

    return 0;
}