#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll n;
 cin>>n;
 
 ll ans = 0;
 for (int i = 0; i < n; i++)
  {
   string s;
   cin>>s;
 
   if(s == "X++" || s == "++X"){
    ans++;
   }else{
    ans--;
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