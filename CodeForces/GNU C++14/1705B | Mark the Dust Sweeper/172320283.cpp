#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn;
    cin >> nn;
 
    vector<ll> vv;
    ll xx;
    for (int i = 0; i < nn; i++)
    {
        cin >> xx;
        vv.emplace_back(xx);
    }
    ll zeroCnt = 0;
    ll ans = 0;
    for (int i = 0; i < (nn - 1); i++)
    {
        if (vv[i] != 0)
        {
            ans = ans + vv[i];
        }
        else
        {
            zeroCnt++;
        }
    }
    // cout << endl;
 
    // for (int i = (nn - 2); i >= 0; i--)
    // {
    // }
    ll trailingZeros = 0;
    for (int i = 0; i < nn; i++)
    {
        if (vv[i] != 0)
        {
            break;
        }
        else
        {
            trailingZeros++;
        }
    }
    // cout << trailingZeros << " " << zeroCnt << " " << ans << endl;
 
    if (trailingZeros >= zeroCnt)
    {
        cout << ans << endl;
    }
    else
    {
        zeroCnt -= trailingZeros;
        ans += zeroCnt;
        cout << ans << endl;
    }
}
 
//////////////***Main Function***//////////////
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
        driver();
 
    return 0;
}