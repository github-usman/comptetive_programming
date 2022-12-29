#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 ll nn,mm;
 cin>>nn>>mm;
 
 if(nn>mm){
 
  cout<<"NO"<<endl;
  return;
 }
 else if(nn&1){
  cout<<"YES"<<endl;
  for (int i = 0; i < nn-1; i++)
   {
    cout<<1<<" ";
   }
   cout<<mm-nn+1<<endl;
   return;
 }else if(nn%2 == 0 && mm%2 == 0){
  cout<<"YES"<<endl;
  for (int i = 0; i < nn-2; i++)
   {
    cout<<1<<" ";
   }
   cout<<(mm-(nn-2))/2<<" "<<(mm-(nn-2))/2<<endl;
 }else if(nn%2 == 0 && mm%2 != 0){
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