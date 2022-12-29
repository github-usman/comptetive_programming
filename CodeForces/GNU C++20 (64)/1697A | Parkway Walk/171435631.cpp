#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn,mm;
    cin>>nn>>mm;
 
  
    ll sum = 0;
    ll xx;
 
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            sum += xx;
        }
    if(sum <= mm){
        cout<<0<<endl;
 
    }else{
        cout<<sum-mm<<endl;
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