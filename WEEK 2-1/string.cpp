#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    s[3] = ' ';

    cout << s.size() << endl;

    // for(int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    // cout << endl;

    cout << s.front() << endl;
    cout << s.back() << endl;
    return 0;
}