#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl "\n"
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll temp;
 
    set<ll> st;
    map<ll,ll> ump;
    for (int i = 0; i < nn; i++)
        {
           cin>>temp;
           vv.emplace_back(temp); 
           ump[vv[i]]++;
           st.emplace(temp);
        }
    if(st.size() ==1){
        cout<<0<<endl;
        return;
    }
    ll maxFreq = 0;
    for(auto x:ump){
        maxFreq = max(x.second,maxFreq);
    }
 
    ll ans = maxFreq;
    // cout<<" freq = "<<maxFreq<<endl;
    ll cnt = 0;
 
    while (ans<nn)
    {
        //copy
        
        cnt += 1;
        // opreations
        // ll checkNotoverflow = ans*2;
        if((ans*2)>nn){
            cnt += (nn-ans);
            ans += (nn-ans);
 
            break;
        }else{
            cnt += ans;
            ans = ans*2;
 
        }
    }
    cout<<cnt<<endl;
    
    
    
    
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