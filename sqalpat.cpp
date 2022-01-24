#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, m=1;
    cin >> n;
    vector<ll> a(n*5);

    for(ll i = 0; i < n; i++)
    {
        if((i+1)%2 == 0)
            m += 4;
        else if(i > 0)
            m += 5;

        for(ll j = 0; j < 5; j++)
            if((i+1)%2 == 0)
            {
                cout << m << " ";        
                m--;
            }
            else
            {
                cout << m << " ";
                m++;
            }

        cout << "\n";
    }

    
    cout << "\n";

    return 0;
}