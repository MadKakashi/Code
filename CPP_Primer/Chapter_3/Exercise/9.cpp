#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>elements{1,2,3,4,5,6,7,8,9,10};
    for (auto a = elements.begin() ; a!=elements.end() ; a++){
        *a *= 2;
    }

    for (auto a : elements){
        cout << a << endl;
    }
    return 0;
}