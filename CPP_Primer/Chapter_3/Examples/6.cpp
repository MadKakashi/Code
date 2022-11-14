#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>text{1,2,3,4,5};
    int sought = 1;
    auto beg = text.begin();
    auto end = text.end();

    auto mid = text.begin() + (end-beg)/2;

    while(mid!=end && *mid != sought){
        if (sought < *mid) end = mid;
        else beg = mid + 1;
        
        mid = beg + (end-beg)/2;
    }


    
    return 0;
}