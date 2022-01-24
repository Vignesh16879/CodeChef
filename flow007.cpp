#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    vector<string> arr(t);

    for(ll i = 0; i < t; i++)
        cin >> arr[i];
    
    for(ll i = 0; i < t; i++)
    {
        for(ll j = arr[i].size()-1; j >= 0; j--)
        {
            if(j == arr[i].size()-1)
                while(arr[i][j] == '0')
                    j--;

            cout << arr[i][j];
            
        }

        cout << "\n";
    }

    cout << "\n";

    return 0;
}