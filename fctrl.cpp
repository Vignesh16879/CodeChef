#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n, a=1, b=0;
        cin >> n;

        while(n/a >0)
        {
            a *= 5;
            b += n/a;
        }

        cout << b << "\n";
    }
        
    cout << "\n";

    return 0;
}