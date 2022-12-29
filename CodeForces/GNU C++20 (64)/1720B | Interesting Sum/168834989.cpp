#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll xx;
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            vv.emplace_back(xx);
        }
    sort(vv.begin(),vv.end());
    ll maxLast = vv[nn-1];
    ll maxminSecondLast = vv[nn-2];
    ll minFisrt = vv[0];
    ll minSecond = vv[1];
 
     cout<<(maxLast-minFisrt)+(maxminSecondLast-minSecond)<<endl;
 
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