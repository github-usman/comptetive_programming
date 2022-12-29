#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn, qq;
    cin >> nn >> qq;
 
    vector<ll> vv;
    ll temp;
 
    ll prefixSum[nn+1] = {0};
    for (int i = 0; i < nn; i++)
    {
        cin >> temp;
        vv.emplace_back(temp);
    }
 
    sort(vv.rbegin(), vv.rend());
    ll xx[qq+1], yy[qq+1];
 
    for (int i = 0; i < qq; i++)
    {
        cin >> xx[i] >> yy[i];
        xx[i],yy[i];
    }
    ll currSum = 0;
    for (int i = 0; i < nn; i++)
        {
            currSum += vv[i];
            prefixSum[i] = currSum;
        }
    ll k = 0;
    ll ans = 0;
    // for (int i = 0; i < nn; i++)
    //     {
    //        cout<<prefixSum[i]<<" "; 
    //     }
    //     cout<<endl;
    while (k<qq)
    {
        
        // cout<<xx[k]<<" "<<yy[k]<<endl;
        if(xx[k] == yy[k]){
            cout<<prefixSum[xx[k]-1]<<endl;
            k++;
            continue;
        }
        cout<<prefixSum[(xx[k]-1)]-prefixSum[((xx[k]-1)-(yy[k]-1))-1]<<endl;
        k++;
    }
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