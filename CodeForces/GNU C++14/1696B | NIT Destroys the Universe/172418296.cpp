#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll temp;
 
    bool allZero = true;
    bool allNonZero = true;
 
    ll start_idx = 0,end_idx = 0;
        for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            if(temp != 0){
                allZero = false;
            }else{
                allNonZero = false;
            }
 
            
 
        }
    if(allZero){
        cout<<0<<endl;
    }else if(allNonZero){
        cout<<1<<endl;
    }else{
        for (int i = 0; i < nn; i++)
            {
                if(vv[i] != 0){
                    start_idx = i;
                    break;
                }
            }
        for (int i = (nn-1); i >= 0; i--)
            {
                if(vv[i] != 0){
                    end_idx = i;
                    break;
                }
            }
        bool between = false;
        for (int i = start_idx; i <= end_idx; i++)
            {
                if(vv[i] == 0){
                    between = true;
                }
            }
        
        if(between){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
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