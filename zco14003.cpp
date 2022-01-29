#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    
    while(n--)
    {
        ll m, t = 1;
        cin >> m;
        vector<ll> arr(m);

        for(ll j = 0; j < m; j++)
            cin >> arr[j];

        ll min = arr[0];

        for(ll j = 1; j < m; j++)
            if(min >= arr[j]) 
            {    
                t++;
                min = arr[j];
            }

        cout << t << "\n";
    }
        
    cout << "\n";

    return 0;
}