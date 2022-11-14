#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string>text {"this","","god"};
    
    for (auto it = text.cbegin() ; it!=text.cend() && !it->empty() ; it++){
        cout << *it << endl;
    }

    return 0;
}