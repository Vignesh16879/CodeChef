#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, k, m = -1;
    cin >> n >> k;

    for(ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        if(a == k)
            m = 1;
    }

    cout << m << "\n";

    return 0;
}