#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll nn;
 cin>>nn;
 
 string ss;
 cin>>ss;
 
 set<ll> st;
 for (int i = 0; i < ss.size(); i++)
  {
   st.emplace(ss[i]);
  }
 ll ans = 2*st.size();
 ans += ss.size()-st.size();
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