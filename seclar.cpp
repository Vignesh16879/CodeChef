#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.begin()+3);
    cout << a[1] << "\n";  
    
    return 0;
}