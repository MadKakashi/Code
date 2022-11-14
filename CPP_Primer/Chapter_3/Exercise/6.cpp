#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string>v2{10,"hi"};
    for (auto i : v2){
        cout << i << endl;
    }
    return 0;
}

//a->zero size
//b-> 10 elements with 0 as value in all elements
//c->10 element with value 42
//d-> 1 element with value 10
//e-> 2 elements with value 10 and 42 respectively
//f-> 10 element with empty strings
//g->10 element with each element a string "hi"

