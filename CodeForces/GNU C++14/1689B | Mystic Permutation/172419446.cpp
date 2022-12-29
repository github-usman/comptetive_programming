#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll temp;
    vector<ll> mysticPermu;
    for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            mysticPermu.emplace_back(i+1);
 
        }
    if(nn == 1){
        cout<<-1<<endl;
        return;
    }
    for (int i = 0; i < (nn-1); i++)
        {
           if(vv[i] == mysticPermu[i]){
                swap(mysticPermu[i],mysticPermu[i+1]);
           }
        }
    if(vv[nn-1] == mysticPermu[nn-1]){
        swap(mysticPermu[nn-1],mysticPermu[nn-2]);
    }
    for (int i = 0; i < nn; i++)
        {
            cout<<mysticPermu[i]<<" ";
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