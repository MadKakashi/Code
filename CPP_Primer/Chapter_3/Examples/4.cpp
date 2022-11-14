#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s = "this is good";
    auto a = s.begin();
    for (;a!=s.end() && !isspace(*a);a++){
        *a = toupper(*a);
    }
    cout << s;
    return 0;
}