#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll nn;
 cin>>nn;
 if(nn&1){
  cout<<1<<" ";
  for (int i = 2; i <=nn; i++)
   {
    if(i&1){
     cout<<i-1<<" ";
    }else{
     cout<<i+1<<" ";    }
   }
 
 }else{
  for (int i = 1; i <=nn; i++)
   {
    if(i&1){
     cout<<i+1<<" ";
    }else{
     cout<<i-1<<" ";    }
   }
 }
 cout<<endl;
 
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