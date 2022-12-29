#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll a,b,c;
    cin>>a>>b>>c;
 
    if(b == 1){
        ll ans1 = 2*(abs(b-c)); 
        ll ans2 = (a-1);
        // cout<<ans1<<" "<<ans2<<endl;
        if(ans1 == ans2){
            cout<<3<<endl;
        }else{
            if(ans2<ans1){
                cout<<1<<endl;
            }else if(ans1<ans2){
                cout<<2<<endl;
            }
        }
    }else{
        ll ans1 = abs(b-c);
        ans1 = ans1+abs(c-1); 
        ll ans2 = (a-1);
       if(ans1 == ans2){
            cout<<3<<endl;
        }else{
            if(ans2<ans1){
                cout<<1<<endl;
            }else if(ans1<ans2){
                cout<<2<<endl;
            }
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