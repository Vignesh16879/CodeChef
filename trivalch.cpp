#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n-i-1; j++)
            cout << " ";

        for(ll j = 0; j < i+1; j++)
            cout << "*";

        cout << "\n";
    }

    cout << "\n";

    return 0;
}