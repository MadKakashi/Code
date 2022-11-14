#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(){
    int ia[] = {1,2,4,5,6};
    int *p = &ia[2];
    int j = p[1];
    int k = p[-2];
    cout << k;
    return 0;
}