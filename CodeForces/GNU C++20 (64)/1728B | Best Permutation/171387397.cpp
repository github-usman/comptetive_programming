#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    ll mm = nn-2;
    deque<ll> vv;
    vv.emplace_front(nn);
    vv.emplace_front(nn-1);
    if(nn&1){
        for (int i = 1; i <= (nn-4); i++)
        {
            if(i%2 == 0){
                vv.emplace_front(i);
            }else{
                vv.emplace_front(i);
            }
            
        }
        vv.emplace_front(nn-2);
        vv.emplace_front(nn-3);
        
    }else{
 
        for (int i = 1; i <= (nn-2); i++)
        {
            if(i%2 == 0){
                vv.emplace_front(i);
            }else{
                vv.emplace_front(i);
            }
            
        }
    }
    
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