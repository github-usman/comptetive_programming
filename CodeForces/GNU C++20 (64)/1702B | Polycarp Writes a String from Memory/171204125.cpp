#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 string ss;
 cin>>ss;
 
 ll i = 0;
 ll cnt = 0;
 set<ll> st;
 bool flag = false;
 // ll i = 0;
 while(i<ss.size()){
    
   st.clear();
   while(i<ss.size()){
    st.emplace(ss[i]);
    flag = true;
    i++;
    if(st.size()>3){
     i--;
     break;
    }
   }
   if(flag){
    cnt++;
    flag = false;
   }
   
  }
  cout<<cnt<<endl;
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