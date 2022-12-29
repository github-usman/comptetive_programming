#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
ll facto(ll nn){
    if(nn == 0 || nn == 1){
        return 1;
    }
    return (nn*facto(nn-1));
}
 
////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;
 
    // cout<<1<<" ";
 
    ll arrVisitedOrNot[nn+1] = {0};
    arrVisitedOrNot[1] = 1;
    vector<ll> vv;
    vv.emplace_back(1);
 
    ll cnt = 1;
    for(ll i = 2;i<=nn;i++){
        if( arrVisitedOrNot[i] == 0){
            // cout<<i<<" ";
            vv.emplace_back(i);
             arrVisitedOrNot[i] = 1;
           
            ll val = i*2;
            while (val<=nn)
            {
                cnt++;
            //  cout<<val<<" ";
             arrVisitedOrNot[val] = 1;
             vv.emplace_back(val);
             val = 2*val;
 
            }
            
        }else{
            continue;
        }
    }
    for (int i = 1; i <= nn; i++)
        {
            if(arrVisitedOrNot[i] != 1 ){
                vv.emplace_back(i);
            }
        }
    cout<<2<<endl;
    for (int i = 0; i < nn; i++)
        {
            cout<<vv[i]<<" ";
        }
    cout<<endl;
    
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