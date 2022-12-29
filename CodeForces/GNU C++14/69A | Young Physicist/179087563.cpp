#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll arr[3] = {0};
 
    ll nn;
    cin >> nn;
 
    ll x, y, z;
    while (nn--)
    {
        cin >> x >> y >> z;
 
        arr[0] += x;
        arr[1] += y;
        arr[2] += z;
    }
 
    if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
 
//////////////***Main Function***//////////////
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t;
    // cin >> t;
 
    // while (t--)
        driver();
 
    return 0;
}