#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student karim(2,5,5.00);
    Student* p = &karim;
    return p;
}

int main()
{
    Student rahim(45,5,3.20);

    Student* obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl;
    return 0;
}