#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);

    stringstream ss(s1);
    string word;
    while(ss >> word)
    {
        if(word == "bad")
        {
            cout << "YES" << endl;
            break;
        }
    }
    return 0;
}