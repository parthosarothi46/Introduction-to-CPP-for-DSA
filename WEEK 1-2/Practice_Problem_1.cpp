#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name , int roll , char section , int math_marks , int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student partho("Partho",1,'A',90,10);
    Student rakib("Rakib",3,'A',85,10);
    Student sazid("Sazid",5,'A',80,10);

    if(partho.math_marks > rakib.math_marks && partho.math_marks > sazid.math_marks)
    {
        cout << partho.name << endl;
    }
    else if(rakib.math_marks > partho.math_marks && rakib.math_marks > sazid.math_marks)
    {
        cout << rakib.name << endl;
    }
    else
    {
        cout << sazid.name << endl;
    }
    return 0;
}