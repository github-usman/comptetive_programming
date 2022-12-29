#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll x,y;
    cin>>x>>y;
 
    ll ans = (x*(x+1))/2;
    ans = ans*y;
    y--;
    y = (y*(y+1))/2;
    ans = ans+y;
    cout<<ans<<endl;
    
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