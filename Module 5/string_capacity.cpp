#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    if(s.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    s.resize(5);
    cout << s << endl;
    s.clear();
    if(s.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    return 0;
}