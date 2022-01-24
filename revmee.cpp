#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for(ll i = 0; i < n; i++)
        cin >> a[i];

    for(ll i = n-1; i >= 0; i--)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}