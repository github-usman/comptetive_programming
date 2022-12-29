#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll x,door[4];
 cin>>x>>door[1]>>door[2]>>door[3];
 
 // short srt = 2;
 ll keyFind = 0;
 
 
  keyFind = door[x];
  // cout<<keyFind<<" k1"<<endl;
  if(keyFind == 0){
 
   cout<<"NO"<<endl;
   return;
  }
 
  x = door[keyFind];
  
  if(x == 0){
   cout<<"NO"<<endl;
   return;
  }
 
 cout<<"YES"<<endl;
 
 
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