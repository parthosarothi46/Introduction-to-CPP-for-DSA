#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    // s1.erase(2,2);

    // cout << s1[0] << endl;
    // cout << *(s1.begin() + 2) << endl;

    // s1.insert(3,"gram");

    s1.replace(2,2,"ll");

    cout << s1 << endl;
    return 0;
}