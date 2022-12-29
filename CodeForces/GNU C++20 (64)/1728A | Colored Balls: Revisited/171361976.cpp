#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll xx;
    ll maxi = 1;
    ll preVal  = 0;
    for (int i = 0; i < nn; i++)
        {
           cin>>xx;
           vv.emplace_back(xx);
           if(preVal<xx){
            preVal = xx;
            maxi = i+1;
           } 
        }
    cout<<maxi<<endl;
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