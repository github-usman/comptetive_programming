#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll x,y,z;
 cin>>x>>y>>z;
 
 ll maxVal = max(x,y);
 maxVal = max(maxVal,z);
 
 ll minVal = min(x,y);
 minVal = min(minVal,z);
 cout<<maxVal-minVal<<endl;
 
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