#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll n;
    cin>>n;
 
    vector<int> vv;
    int temp;
 
    ll ans = 1; 
    for(int i = 0;i<n;i++){
        cin>>temp;
        vv.push_back(temp);
        ans *= temp;
    }
    ans += n-1;
    cout<<ans*2022<<endl;
 
    
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