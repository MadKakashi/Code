#include<iostream>

using namespace std;

int main(){
    float basic_salary , percentage_of_allowances , percentage_of_deductions;
    cout << "Enter basic salary:";
    cin >> basic_salary;
    cout << "Enter percentage of allowances:";
    cin >> percentage_of_allowances;
    cout << "Enter percentage of deductions:";
    cin >> percentage_of_deductions;
    float net_salary = basic_salary + (basic_salary*(percentage_of_allowances/100)) - (basic_salary*(percentage_of_deductions/100));
    cout << "The net salary is " << net_salary;
    return 0;
}