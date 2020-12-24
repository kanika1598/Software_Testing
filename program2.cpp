#include <iostream>
using namespace std;

int main()
{
    float b, h, a;
    int option;
    while (option)
    {
        cout << "Enter your Choice: " << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Square" << endl;
        cout << "3. Rectangle" << endl;
        cout << "4. Circle" << endl;
        cout << "5. Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter the Base of Triangle: " << endl;
            cin >> b;
            if ((b <= 0) || (b > 200))
            {
                cout << "Invalid Base" << endl;
                cout << "Enter the Base of Triangle: " << endl;
                cin >> b;
            }
            cout << "Enter the Height of Triangle: " << endl;
            cin >> h;
            if ((h <= 0) || (h > 200))
            {
                cout << "Invalid Height" << endl;
                cout << "Enter the Height of Triangle: " << endl;
                cin >> h;
            }
            a = 0.5 * b * h;
            cout << "The Area of Triangle is: " << a << endl;
            break;
        case 2:
            cout << "Enter the Side of the Square: " << endl;
            cin >> b;
            if ((b <= 0) || (b > 200))
            {
                cout << "Invalid Side" << endl;
                cout << "Enter the Side of the Square: " << endl;
                cin >> b;
            }
            a = b * b;
            cout << "The Area of Square is: " << a << endl;
            break;
        case 3:
            cout << "Enter the Base of Rectangle: " << endl;
            cin >> b;
            if ((b <= 0) || (b > 200))
            {
                cout << "Invalid Base" << endl;
                cout << "Enter the Base of Rectangle: " << endl;
                cin >> b;
            }
            cout << "Enter the Height of Rectangle: " << endl;
            cin >> h;
            if ((h <= 0) || (h > 200))
            {
                cout << "Invalid Height" << endl;
                cout << "Enter the Height of Rectangle: " << endl;
                cin >> h;
            }
            a = b * h;
            cout << "The Area of Rectangle is: " << a << endl;
            break;
        case 4:
            cout << "Enter the Radius of Circle: " << endl;
            cin >> b;
            if ((b <= 0) || (b > 200))
            {
                cout << "Invalid Radius" << endl;
                cout << "Enter the Radius of Circle: " << endl;
                cin >> b;
            }
            a = 3.14 * b * b;
            cout << "The Area of the Circle is: " << a << endl;
            break;
        case 5:
            exit(0);
        default:
            cout << "Enter a Valid Option: " << endl;
        }
    }

    return 0;
}