//a->char , wchar_t , string literal , wide character string literal
//b->int,unsigned int , long int , unsigned long int , ocatal , hexadecimal
//c-> double , float , long double
//d->decimal , unsigned int , double , double

//int month = 9 , day = 7; ->integer representation
//int month = 9 , day = 7; ->octal representation

//a->Who goes with Fergus?\n (string literal)
//b->31.4 (long double)
//c->1024 (float)
//d->3.14 (Long double)

#include<iostream>

using namespace std;

int main(){
    char c = 50;
    cout << "\62 \115 \012"<< endl;
    cout << "\62 \011 \115 \012 ";
    return 0;
}