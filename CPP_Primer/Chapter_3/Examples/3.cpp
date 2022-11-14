#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string word;
    vector<string> text;

    while(cin >> word){
        text.push_back(word);
    }

    for (auto c : text){
        cout << c << " ";
    }
    
    return 0;
}