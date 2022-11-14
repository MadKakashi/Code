// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string str;
//     while(cin>>str){
//         cout << str << endl;
//     }
//     return 0;
// }

// the leading whitespace
// in string input operator -> skipped
// in getline input operator -> not skipped
// the string input operator terminate on whitespace
// getline input operator terminate on the newline character

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     string s1,s2;

//     while(getline(cin,s1) && getline(cin,s2))
//     {

//     if (s1==s2) cout << "Equal strings"<<endl;
//     else cout << "Unequal strings"<<endl;

//     auto len1 = s1.size();
//     auto len2 = s2.size();

//     if (len1==len2) cout << "Equal length";
//     else if (len1>len2) cout << "s1 string is the larger";
//     else cout << "s2 is the larger string";

//     getline(cin,s1);
//     }
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2, large;
    while (cin >> s1)
    {
        if (large.empty()){
            large += s1;
        }
        else large += " " + s1;
    }
        cout << large;
        return 0;
    }