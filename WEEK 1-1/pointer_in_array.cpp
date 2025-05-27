#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Value of numbers[0]: " << *numbers << endl;
    cout << "Value of numbers[1]: " << *(numbers + 1) << endl;
    cout << "Value of numbers[2]: " << *(numbers + 2) << endl;
    cout << "Address of numbers[0]: " << numbers << endl;
    cout << "Address of numbers[1]: " << (numbers + 1) << endl;
    cout << "Address of numbers[2]: " << (numbers + 2) << endl;
    *(numbers + 0) = 100;
    *(numbers + 1) = 200;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }
    
    return 0;
}