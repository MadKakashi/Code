#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    //legal, post increment iter and then *iter(non-incremented)
    //illegal, 
    //illegal, (*iter).empty() is correct because dot operator is high in priority than deref hence first it *(iter.empty()) iter is pointer and empty is not usable
    //legal, deref iter and then dot operator with empty()
    //illegal,
    //iter-<empty and also iter is increment
    return 0;
}