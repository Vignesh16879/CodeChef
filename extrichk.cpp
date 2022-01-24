#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c)
        cout << "1";
    else 
        if(a+b > c && b+c > a && a+c > b)
            if(a == b || b == c || a == c)
                cout << "2";
            else
                cout << "3";
        else
            cout << "-1";
    
    cout << "\n";

    return 0;
}