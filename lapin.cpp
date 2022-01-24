#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<string> arr(n);

    for(ll i = 0; i < n; i++)
        cin >> arr[i];

    for(ll i = 0; i < n; i++)
    {
        string str, a, b;
        str = arr[i];
        a = str.substr(0, str.size()/2);
        b = str.substr((str.size()+1)/2, str.size());
        sort(a.begin(), a.begin()+a.size());
        sort(b.begin(), b.begin()+b.size());

        if(a == b)
            cout << "YES";
        else
            cout << "NO";

        cout << "\n";
    }


    cout << "\n";

    return 0;
}