#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    // vector<string>v1{10,"hi"};
    // for (auto a = v1.begin() ; a!=v1.end() ; a++){
    //     cout << *a << endl;
    // }

    vector <string> text;

    for (string line ; getline(cin,line) ;) text.push_back(line);

    for (auto a = text.begin() ; a!=text.end() && !(a->empty()) ; a++){
        for (auto &b : *a){
            b = toupper(b);
        }
        cout << *a << endl;
    }
    return 0;
}