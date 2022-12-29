#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;
 
    string ss;
    cin>>ss;
    string bb;
    cin>>bb;
 
    if( ss == bb){
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < nn; i++)
        {
            if((ss[i] == 'B' || ss[i] == 'G') && (bb[i] == 'B' || bb[i] == 'G')){
                continue;
            }else if(ss[i] == bb[i]){
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