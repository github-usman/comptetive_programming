#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll a,b,c;
    cin>>a>>b>>c;
 
    ll minVal = min(a,b);
    minVal = min(minVal,c);
    ll maxVal = max(a,b);
    maxVal = max(maxVal,c);
 
    if(a != minVal && a != maxVal ){
      cout<<a<<endl;
    }else if(b != minVal && b != maxVal ){
      cout<<b<<endl;
    }else{
      cout<<c<<endl;
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