#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
  int a;
  cin>>a;
  string ss;
  cin>>ss;
 
  sort(ss.rbegin(),ss.rend());
 
  char ans = ss[0];
  cout<<(int)ans-96<<endl;
    
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