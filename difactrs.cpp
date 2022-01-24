#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> ans;

    for(ll i = 1; i <= n; i++)
        if(n % i == 0)
            ans.push_back(i);
    
    cout << ans.size() << "\n";

    for(auto x : ans)
        cout << x << " ";

    cout << "\n";

    return 0;
}