#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Basic Salary of the Employee: ";
    float bs;
    cin >> bs;
    int hra, da, ma = 100, itax = 700, pf = 780, ta = 800;
    hra = 0.3 * bs;
    da = 0.8 * bs;
    cout << "House Allowance is Rs. " << hra << endl;
    cout << "Darkness Allowance is Rs. " << da << endl;
    cout << "Medical Allowance is Rs. " << ma << endl;
    cout << "Travel Allowance is Rs. " << ta << endl;
    cout << "Income Tax is Rs. " << itax << endl;
    cout << "Provided Fund is Rs. " << pf << endl;
    float netsal;
    netsal = bs + hra + da + ta - itax - pf;
    cout << "The Net Salary is Rs. " << netsal;
    return 0;
}