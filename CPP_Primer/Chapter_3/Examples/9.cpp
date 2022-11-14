#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ia[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {10, 11, 12, 13}};

    // for ( int (&a)[4] : ia){
    //     for ( int b : a){
    //         cout << b << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0 ; i<3 ; i++){
    //     for (int j = 0 ; j<4 ; j++){
    //         cout << ia[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int (*p)[4] = &ia[0] ; p!=&ia[3]; p++ ){
    //     for (int *q = *p ; q !=(*p) + 4 ; q++){
    //         cout << *q << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}