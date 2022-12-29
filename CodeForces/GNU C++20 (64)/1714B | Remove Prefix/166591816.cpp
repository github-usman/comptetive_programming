#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll n;
    cin >> n;
 
    vector<ll> vv;
    ll x;
    ll arr[200000] = {0};
    ll cnt = 0;
    bool allSame = true;
    cin>>x;
    vv.emplace_back(x);
    ll preVal = x;
    for (int i = 1; i < n; i++)
    {   
        
        cin >> x;
        // cout<<preVal<<" "<<x<<endl;
        if(preVal != x){
            allSame = false;
        }
        
 
        vv.emplace_back(x);
    }
    if(allSame){
        cout<<n-1<<endl;
        // cout<<"ye"<<endl;
        return;
    }
    if(n == 1){
        cout<<0<<endl;
        return;
    }
     for (int i = (n-1); i >= 0; i--)
    {
        ll val = vv[i];
        if (arr[val] == 1)
        {
            cout << n-cnt << endl;
            return;
        }
        else
        {
            arr[val] = 1;
            cnt++;
        }
 
        // vv.emplace_back(x);
    }
    cout<<0<<endl;
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