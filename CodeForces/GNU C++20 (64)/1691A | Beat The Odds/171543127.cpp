#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll xx;
  
    ll oddcnt = 0;
    ll evencnt = 0;
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            vv.emplace_back(xx);
            if(xx&1){
                oddcnt++;
            }else{
              evencnt++;
            }
 
        }
    if(oddcnt == 0 || evencnt == 0){
        cout<<0<<endl;
    }else{
        if(oddcnt>evencnt){
            cout<<evencnt<<endl;
        }else{
            cout<<oddcnt<<endl;
        }
 
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