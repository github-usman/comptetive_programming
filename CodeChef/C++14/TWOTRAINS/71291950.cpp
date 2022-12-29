#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    vector<ll> vv;
    ll x;

    ll runningSum = 0;
    for (int i = 0; i < (n-1); i++)
        {
            cin>>x;
            vv.emplace_back(x);
            runningSum += x;
        }
    
    sort(vv.begin(),vv.end());
    cout<<(vv[n-2]+runningSum)<<endl;

    
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