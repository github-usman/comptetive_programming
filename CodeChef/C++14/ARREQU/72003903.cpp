#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
   
   ll nn;
   cin>>nn;

    vector<ll> vv;
    ll xx;
    map<ll,ll,greater<int>> ump;
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            vv.emplace_back(xx);
            ump[vv[i]]++;
        }
    
    ll sequences = 0;
    if((nn%2) == 0){
        sequences = nn/2;
    }else{
        // cout<<"odd"<<endl;
        sequences = (nn/2)+1;
    }
    // sort(ump.rbegin,ump.rend);
    vector<ll> freq;
    for(auto mm:ump){
        freq.emplace_back(mm.second);
    }

    sort(freq.rbegin(),freq.rend());
    for (auto it = freq.begin();it != freq.end();it++)
        {
            if(*it <= sequences){
                // sequences--;
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    cout<<"YES"<<endl;
    
    
     
        
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