#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn,kk;
    cin>>nn>>kk;
 
    vector<ll> vv;
    ll temp;
 
    for (int i = 0; i < nn; i++)
        {
           cin>>temp;
           vv.emplace_back(temp); 
        }
    
    vector<ll> vv2;
    // vv2 = vv;
 
    for (int i = 0; i <nn; i++)
        {
            vv[i%kk] = max(vv[i],vv[i%kk]);
        }
    ll curr = 0;
   
    // for (int i = 0; i < nn; i++)
    //     {
    //        cout<<vv2[i]<<" "; 
    //     }
    // cout<<endl;
    // for (int i = 0; i < nn; i++)
    //     {
    //         cout<<prefixSum[i]<<" ";
    //     }
 
    
    for (int i = 0; i < kk; i++)
        {
          curr += vv[i];
        }
        cout<<curr<<endl;
 
    
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