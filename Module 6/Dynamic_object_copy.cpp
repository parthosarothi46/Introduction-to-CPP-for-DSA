#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;
    Cricketer(string country,int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer* dhoni = new Cricketer("India",10);
    Cricketer* kohli = new Cricketer("India",18);
    *kohli = *dhoni;
    // cout << dhoni->jersey << endl;
    // cout << kohli->jersey << endl;
    delete dhoni;
    cout << kohli->jersey << endl;
    return 0;
}