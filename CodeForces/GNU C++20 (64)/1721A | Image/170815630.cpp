#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 // ll nn;
 // cin>>nn;
 
 string ss1,ss2;
 cin>>ss1;
 cin>>ss2;
 set<ll> st;
 st.emplace(ss1[0]);
 st.emplace(ss1[1]);
 st.emplace(ss2[0]);
 st.emplace(ss2[1]);
 
 cout<<(st.size())-1<<endl;
 
 
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