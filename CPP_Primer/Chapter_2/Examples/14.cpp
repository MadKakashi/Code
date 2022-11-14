#include<iostream>

using namespace std;

struct Sales_data {
    std::string bookNO;
    unsigned units_sold = 12;
    double revenue = 12.0;
};

int main(){
    Sales_data d1;
    cout << d1.revenue;
    return 0;
}