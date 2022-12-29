#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll nn;
 cin>>nn;
 
 vector<ll> vv;
 ll xx;
 set<ll> st;
 for (int i = 0; i < nn; i++)
  {
   cin>>xx;
   vv.emplace_back(xx);
   st.emplace(xx);
  }
 
 if(vv[0] == 1 || st.size() == 1 ){
  cout<<"YES"<<endl;
  return;
 }else {
  ll preVal = vv[0];
  for (int i = 1; i < nn; i++)
   {
    if(vv[i]%preVal != 0){
     cout<<"NO"<<endl;
     return;
    }
   }
   cout<<"YES"<<endl;
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