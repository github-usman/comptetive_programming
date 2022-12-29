#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    vector<ll> vv;
    unordered_map<ll,ll> ump;
    ll tem;
    for (int i = 0; i < nn; i++)
        {
            cin>>tem;
            vv.emplace_back(tem);
            ump[vv[i]]++;
        }
    
    ll maxVal = 0;
    for(auto x:ump){

        maxVal = max(x.second,maxVal);
    }
    cout<<nn-maxVal<<endl;
    
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