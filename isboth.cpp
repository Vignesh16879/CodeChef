#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    
    if(n % 55 == 0)
        cout << "BOTH" << "\n";
    else if(n % 5 == 0 || n % 11 == 0)
        cout << "ONE" << "\n";
    else
        cout << "NONE" << "\n";

    cout << "\n";

    return 0;
}