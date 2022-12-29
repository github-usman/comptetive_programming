#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 string s;
 cin>>s;
 
 string ans = "";
 for (ll i = 0; i < s.size(); i++)
  { 
   if((s[i] == '0' || s[i] == '9') && i == 0){
    ans += to_string(9);
    continue;
   }
   ll x = s[i]-'0';
   if((9-x)>4){
    ans += to_string(x);
   }else{
    x  = 9-x;
    ans += to_string(x);
   }
  }
 
  cout<<ans<<endl;
 
 
}
 
//////////////***Main Function***//////////////
int32_t main(){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 
 // int t;
 // cin>>t;
 
 // while(t--)
 driver();
 
 
 
 return 0;
}