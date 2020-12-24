#include <iostream>
using namespace std;

int main()
{
    int day, month, year, flag = 0;
    cout << "Enter the Day Value: " << endl;
    cin >> day;
    cout << "Enter the Month Value: " << endl;
    cin >> month;
    cout << "Enter the Year Value: " << endl;
    cin >> year;
    if (year >= 1900 && year <= 2025)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day >= 1 && day <= 31)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if (month == 2)
        {
            int rval = 0;
            if (year % 4 == 0)
            {
                rval = 1;
                if (year % 100 == 0 && year % 400 != 0)
                {
                    rval = 0;
                }
            }
            if (rval)
        }
    }
}