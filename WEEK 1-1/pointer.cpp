#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout << "Value of x -> " << x << endl;
    cout << "Address of x -> " << &x << endl;
    int *ptr = &x;
    cout << "Value of ptr -> " << ptr << endl;
    cout << "Value pointed to by ptr -> " << *ptr << endl;
    *ptr = 100;
    cout << "Value of x -> " << x << endl;
    cout << "Value pointed to by ptr -> " << *ptr << endl;
    return 0;
}