#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name,int roll,int math,int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student partho("Partho Sarothi",24,85,92);
    cout << partho.name << endl;
    partho.total();
    Student rakib("Rakib Hasan",26,65,95);
    rakib.total();
    return 0;
}