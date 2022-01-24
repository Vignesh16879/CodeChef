#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll l, r;
    cin >> l >> r;

    if(l % 2 == 0)
        l++;

    while(r >= l)
    {
        cout << l << " ";
        l += 2;
    }

    cout << "\n";

    return 0;
}