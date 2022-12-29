#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 ll nn,mm;
 cin>>nn>>mm;
 if(nn == 1 and mm == 1){
  cout<<0<<endl;
 }
 else if(nn == 1 || mm == 1){
  cout<<max(nn,mm)<<endl;
 }else{
  ll minVal = min(mm,nn);
  ll maxVal = max(mm,nn);
  cout<<2*(minVal-1)+maxVal<<endl;
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