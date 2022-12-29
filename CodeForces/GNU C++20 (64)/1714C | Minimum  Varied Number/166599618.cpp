#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll n;
 cin>>n;
 
 ll j = 9;
 deque<ll> ss;
 while (j)
 {
  if(n>j){
   ss.push_front(j);
   n -= j;
   j--;
   continue;
  }
  if(n <= j){
   ss.push_front(n);
   break;
  }
 
 }
 for (int i = 0; i < ss.size(); i++)
  {
   cout<<ss[i];
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