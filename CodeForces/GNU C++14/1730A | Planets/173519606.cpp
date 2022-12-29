#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn,cc;
    cin>>nn>>cc;
 
 
    vector<ll> vv;
    ll temp;
    unordered_map<ll,ll> ump;
    for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            ump[vv[i]]++;
        }
    
    ll ans = 0;
    for(auto x:ump){
        ans += min(x.second,cc);
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