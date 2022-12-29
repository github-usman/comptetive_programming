#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll nn,kk;
 cin>>nn>>kk;
 
 ll ans = 0;
 ll xx;
 vector<ll> vv;
 for(int i = 0;i< nn;i++){
  cin>>xx;
  vv.emplace_back(xx);
  
 }
 
 for(int i = 0;i<kk;i++){
  if(vv[i] <= kk){
   continue;
  }else{
   ans++;
  }
  
 }
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