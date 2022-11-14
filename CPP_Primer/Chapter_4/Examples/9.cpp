#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s1;
    while(getline(cin,s1)){
        int count = 0,blank=0,newline=0,tabs=0,ff=0,fl=0,fi=0;
        auto start = s1.begin();
        while(start!=s1.end()){
            switch(*start){
                case 'a' : case 'A': count++; break;
                case 'e' : case 'E': count++; break;
                case 'i' : case 'I': count++; break;
                case 'o' : case 'O': count++; break;
                case 'u' : case 'U': count++; break;
                case ' ' : blank++; break;
                case '\n' :newline++; break;
                case '\t' :tabs++; break;
                case 'f': if(*(start+1)=='f'){ff++;}
                          else if(*(start+1)=='l'){fl++;}
                          else if(*(start+1)=='i'){fi++;}
                          break;
            }
            start++;
        }
        cout << "Vowels: " << count << endl;
        cout << "Newline: " << newline << endl;
        cout << "Tabs: " << tabs << endl;
        cout << "Blank: " << blank << endl;
        cout << "ff: "<<ff << endl;
        cout << "fl: " << fl << endl;
        cout << "fi: " << fi << endl;
    }
    return 0;
}
