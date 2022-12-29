#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 string ss;
 cin>>ss;
 
 if(ss == "YES" || ss == "Yes" ||ss == "YEs" || ss == "yeS" || ss == "yEs" || ss == "yes" || ss == "yES" || ss == "YeS"  ){
  cout<<"YES"<<endl;
 }else{
  cout<<"NO"<<endl;
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