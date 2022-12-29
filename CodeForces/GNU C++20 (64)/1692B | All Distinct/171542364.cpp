#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll xx;
    unordered_map<ll,ll> ump;
    for (int i = 0; i < nn; i++)
        {
           cin>>xx;
           vv.emplace_back(xx);
           ump[vv[i]]++;
 
        }
        ll cnt = 0;
    for(auto &x:ump){
        if(x.second>=2){
            cnt += (x.second-1);
        }
    }
    if(cnt&1){
        cout<<nn-(cnt+1)<<endl;
    }else{
        cout<<nn-cnt<<endl;
    }
    
    
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