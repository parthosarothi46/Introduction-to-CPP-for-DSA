#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c,double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim(45,5,3.20);

    Student karim(2,5,5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}