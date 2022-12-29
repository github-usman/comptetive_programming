#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn,kk;
    cin>>nn>>kk;
 
    vector<ll> vv;
    ll xx;
 
    ll cnt  = 0;
    for (int i = 0; i < nn; i++)
        {
           cin>>xx;
           vv.emplace_back(xx); 
           
        }
    
 
    if(kk == 1){
        if(nn&1){
            cout<<nn/2<<endl;
        }else{
            cout<<(nn/2 )-1<<endl;
        }
        return;
    }
 
     for (int i = 1; i < nn-1; i++)
        {
           if(vv[i]> (vv[i-1]+vv[i+1])){
            cnt++;
           }else{
            continue;
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