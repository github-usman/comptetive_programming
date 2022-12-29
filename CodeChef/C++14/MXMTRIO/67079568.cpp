#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    vector<ll> vv;
    ll x;

    for (int i = 0; i < n; i++)
        {
            cin>>x;
            vv.emplace_back(x);
        }
    sort(vv.begin(),vv.end());
    ll ans = (vv[n-1] - vv[0])*vv[n-2];
    cout<<ans<<endl;
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    driver();



    return 0;
}