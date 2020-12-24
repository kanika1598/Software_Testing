#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "The Quadratic Equation is of the type a(x^2) + bx + c = 0" << endl;
    cout << "Enter the Value of a: " << endl;
    cin >> a;
    cout << "Enter the Value of b: " << endl;
    cin >> b;
    cout << "Enter the Value of c: " << endl;
    cin >> c;
    d = (b * b) - 4 * a * c;
    if ((a < 0) || (b < 0) || (c < 0) || (a > 100) || (b > 100) || (c > 100))
    {
        cout << "Invalid Input!" << endl;
    }
    else if (a == 0)
    {
        cout << "Not a Quadratic Equation!" << endl;
    }
    else if (d == 0)
    {
        cout << "Roots are Equal!" << endl;
    }
    else if (d < 0)
    {
        cout << "Imaginary Roots!" << endl;
    }
    else
    {
        cout << "Real Roots!" << endl;
    }

    return 0;
}