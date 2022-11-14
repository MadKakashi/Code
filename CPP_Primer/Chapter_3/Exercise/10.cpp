#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int>list = {1,2,3,4,5};

    auto beg = list.begin();

    // while(beg != list.end()-1){
    //     cout << *beg + *(beg+1) << endl;
    //     beg++;
    // }
    auto end = list.end()-1;

    while(beg <= end){
        cout << *end + *beg << endl;
        beg++;
        end--;
    }
    return 0;
}