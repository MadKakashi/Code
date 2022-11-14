#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int value;
    // vector<int> list;
    // while(cin >> value){
    //     list.push_back(value);
    // }

    // for (auto i : list){
    //     cout << i << endl;
    // }

    string s;
    vector<string> str;
    while(getline(cin , s)){
        str.push_back(s);
    }

    for (auto s : str)
{
    cout << s << " ";
}    return 0;
}