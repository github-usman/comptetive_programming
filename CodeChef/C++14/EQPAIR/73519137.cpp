#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    ll xx;
    unordered_map<ll,ll> ump;
    vector<ll> vv;
    for (int i = 0; i < nn; i++)
        {
           cin>>xx; 
           vv.emplace_back(xx);
           ump[vv[i]]++;
        }
    ll ans = 0;
    for(auto x : ump){
        if(x.second == 1){
            continue;
        }else if(x.second == 2){
            ans++;
        }
        else {
            ll val = x.second-1;
            ans += (val*(val+1))/2;
         
            
        }
    }
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