#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
  
  ll nn;
  cin>>nn;
 
  string ss;
  cin>>ss;
 
 
    if(nn<5){
      cout<<"NO"<<endl;
      return;
    }
    string sm = "Timru";
    sort(ss.begin(),ss.end());
    // cout<<ss<<endl;
 
    for (int i = 0; i < nn; i++)
        { 
          // cout<<ss[i]<<" "<<sm[i]<<endl;
            if(ss[i] == sm[i]){
              continue;
            }else{
              cout<<"NO"<<endl;
              return;
            }
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