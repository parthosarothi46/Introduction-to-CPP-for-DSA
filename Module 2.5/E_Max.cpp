#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int numbers[N];
    int maximum = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < N; i++)
    {
        maximum = max(maximum,numbers[i]);
    }
    cout << maximum;
    return 0;
}