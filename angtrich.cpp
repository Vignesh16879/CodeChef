#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if(a+b+c == 180 && (a < 180 && b < 180 && c < 180) && (a > 0 && b > 0 && c > 0))
        cout << "YES";
    else
        cout << "NO";
    
    cout << "\n";

    return 0;
}