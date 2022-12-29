#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll temp;
 
    ll minVal = INT_MAX;
    bool increased = true;
    for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            minVal = min(minVal,temp);
 
 
        }
 
    if( minVal == vv[nn-1]  && minVal < (nn-1)){
        cout<<-1<<endl;
        return;
    }
 
    if(nn == 1){
        cout<<0<<endl;
        return;
    }
 
    for (int i = 1; i < nn; i++)
        {
            if(vv[i-1]<vv[i]){
                continue;
            }else{
                increased = false;
                break;
            }
        }
    if(increased){
        cout<<0<<endl;
        return;
    }
    
    ll cnt = 0;
 
    
    for (int i = nn-2; i >= 0; i--)
        {
            if(vv[i+1] <= vv[i]){
                ll lcCnt = 0;
                if(vv[i+1] == 0){
                    cout<<-1<<endl;
                    return;
                }
                while (vv[i+1] <= vv[i])
                {
                    vv[i] = vv[i]/2;
                    lcCnt++;
                }
                cnt += lcCnt;
                
            }else{
 
            }
            // for (int i = 0; i < nn; i++)
            //     {
            //        cout<<vv[i]<<" "; 
            //     }
            //     cout<<endl;
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