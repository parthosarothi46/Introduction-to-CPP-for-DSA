#include<bits/stdc++.h>
using namespace std;

int* fun()
{
    int* x = new int[4];
    for (int i = 0; i < 4; i++)
    {
        x[i] = i+10;
    }
    return x;
}

int main()
{
    int* arr = fun();
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}