#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 
 ll ans = 0;
 for (int i = 1; i <= 5; i++)
  {
   for (int j = 1; j <= 5; j++)
    { 
     ll x;
     cin>>x;
     if(x == 1){
      ans = abs(3-i)+abs(3-j);
      cout<<ans<<endl;
      return;
     }
     x = 0;
    }
  }
  
 
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