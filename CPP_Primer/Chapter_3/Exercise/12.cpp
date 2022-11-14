#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    // int a[5] = {1,2,23,4,5};
    // int b[5] = {1,2,3,4,5};

    // int *start_a = begin(a);
    // int *last_a = end(a);
    // int *start_b = begin(b);

    // while(start_a!=last_a){
    //     if (*start_a!=*start_b){
    //         cout << "Not equal";
    //         break;
    //     }
    //     start_a++;
    //     start_b++;
    // }

    // if (start_a==last_a) cout << "Equal";


    vector<int>a{1,2,3};
    vector<int>b{1,1,2,3};

    if (a==b)cout << "Equal";
    else cout << "Not equal";
    return 0;
}