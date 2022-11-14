#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int>ivec{1,23,4,5};
    int arr[4];
    int i =0;
    
    for (int *a = begin(arr) ; a!=end(arr) ; a++){
        *a = ivec[a-begin(arr)];
    }

    for (int a : arr){
        cout << a << endl;
    }

    return 0;
}