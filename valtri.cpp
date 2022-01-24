#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    if(n%5 == 0 || n%6 == 0)
        cout << "YES";
    else
        cout << "NO";

    cout << "\n";

    return 0;
}