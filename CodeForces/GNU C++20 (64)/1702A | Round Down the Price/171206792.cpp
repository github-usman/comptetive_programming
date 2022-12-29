#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
ll power(ll nn){
 ll ans = 1;
 for (int i = 0; i < nn; i++)
  {
   ans *= 10;
  }
  return ans;
}
 
////////////***First Approach***////////////
void driver(){
 
 ll nn;
 cin>>nn;
 
 ll val = floor(log10(nn));
 ll ans = power(val);
 // cout<<ans<<endl;
 cout<<nn-ans<<endl;
 
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