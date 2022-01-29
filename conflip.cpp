#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll g; 
        cin >> g;

        while(g--)
        {
            ll i, n, q;
            cin >> i >> n >> q;
            
            if(n%2 == 0)
                cout << n/2 << "\n";
            else if(i == q)
                cout << n/2 << "\n";
            else
                cout << n/2 +1 << "\n";
        }
    }
        
    cout << "\n";

    return 0;
}