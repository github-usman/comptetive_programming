#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll l,r,a;
    cin>>l>>r>>a;
 
    ll maxVal = 0;
    ll div = r/a;
    ll stVal = div*a;
 
    stVal -= 1;
 
    // cout<<" stval = "<<stVal<<" l = "<<l<<endl;
    if(stVal < l){
        cout<<(r/a)+(r%a)<<endl;
        // cout<<" = here"<<endl;
        return;
    }
 
    if(stVal>=l && stVal<= r){
        cout<<max(((stVal/a)+(stVal%a)),((r/a)+(r%a)))<<endl;
        return;
    }else{
        cout<<max(((l/a)+(l%a)),((r/a)+(r%a)))<<endl;
        return;
    }
    // if((r-l) >= a){
    //     maxVal = max(((stVal/a)+(stVal%a)),((r/a)+(r%a)));
    //     maxVal = max(maxVal,((l/a)+(l%a)));
    // }else{
    //     maxVal = max(((l/a)+(l%a)),((r/a)+(r%a)));
    // }
    
    // for (ll i = stVal; i <=r; i++)
    //     {
    //         maxVal = max(((i/a)+i%a),maxVal);
    //     }
    // cout<<maxVal<<endl;
    
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