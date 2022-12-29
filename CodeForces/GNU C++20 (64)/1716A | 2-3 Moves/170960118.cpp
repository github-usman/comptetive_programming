#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 ll nn;
 cin>>nn;
 
 if(nn == 1){
  cout<<2<<endl;
 }else{
  ll ans = nn/3;
  if(nn%3 == 0){
   cout<<ans<<endl;
  }else{
   cout<<++ans<<endl;
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