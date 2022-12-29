#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> ss;
    vector<ll> ff;
    ll xx;
    ll yy;
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            ss.emplace_back(xx);
        }
    for (int i = 0; i < nn; i++)
        {
            cin>>yy;
            ff.emplace_back(yy);
            
        }
    ll preVal = 0;
    for (int i = 0; i < nn; i++)
        {
           if(preVal>ss[i]){
            ll val = preVal-ss[i];
            cout<<ff[i]-(val+ss[i])<<" ";
            preVal = ff[i];
           }else{
            cout<<ff[i]-ss[i]<<" ";
            preVal = ff[i];
           } 
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