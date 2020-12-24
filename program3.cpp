#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    float c;
    int option;
    do
    {
        cout << "To Calculate the 'a to the power b'" << endl;
        cout << "Enter the Value of a: " << endl;
        cin >> a;
        cout << "Enter the Value of b: " << endl;
        cin >> b;
        c = pow(a, b);
        cout << "Answer is: " << c << endl;
        cout << "Do you Want to Continue? " << endl;
        cin >> option;
    } while (option);

    return 0;
}