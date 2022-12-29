#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 ll nn;
 cin>>nn;
 
 ll div = nn/6;
 ll rem = nn%6;
 
 ll ans = div*16;
 if(rem == 1 ){
  cout<<ans+1<<endl;
 }else if(rem == 2 ){
  cout<<ans+4<<endl;
 }else if(rem == 3 ){
  cout<<ans+7<<endl;
 }else if(rem == 4 ){
  cout<<ans+10<<endl;
 }else if(rem == 5 ){
  cout<<ans+11<<endl;
 }else{
  cout<<ans<<endl;
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