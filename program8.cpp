#include <iostream>
using namespace std;

struct student
{
    char sname[10];
    float marks[5];
    float total, avg;
    char grade;
} s[10];

int main()
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        cout << "Enter the Name of the Student " << i << "\t";
        cin >> s[i].sname;
        for (j = 0; j < 5; j++)
        {
            cout << "Enter the Marks in Subject " << j << "\t";
            cin >> s[i].marks[j];
        }
        for (j = 0; j < 5; j++)
        {
            s[i].total = s[i].total + s[i].marks[j];
        }
        s[i].avg = s[i].total / 5;
        cout << "The Average of Student " << i << " is: " << s[i].avg << endl;
        if (s[i].avg > 90.0)
        {
            s[i].grade = 'O';
            cout << "The Grade of Student " << i << " is: " << s[i].grade << endl;
            cout << endl;
        }
        else if (s[i].avg < 90.0 && s[i].avg >= 85.0)
        {
            s[i].grade = 'A';
            cout << "The Grade of Student " << i << " is: " << s[i].grade << endl;
            cout << endl;
        }
        else if (s[i].avg < 85.0 && s[i].avg >= 80.0)
        {
            s[i].grade = 'B';
            cout << "The Grade of Student " << i << " is: " << s[i].grade << endl;
            cout << endl;
        }
        else if (s[i].avg < 80.0 && s[i].avg >= 70.0)
        {
            s[i].grade = 'C';
            cout << "The Grade of Student " << i << " is: " << s[i].grade << endl;
            cout << endl;
        }
        else
        {
            s[i].grade = 'D';
            cout << "The Grade of Student " << i << " is: " << s[i].grade << endl;
            cout << endl;
        }
    }
    return 0;
}