#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N/2; i++)
    {
        swap(A[i],A[N - 1 - i]);
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}