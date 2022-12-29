#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn,mm;
    cin>>nn>>mm;
 
    if(mm == 1 && nn == 1){
        cout<< 0<<endl;
    }else if(mm == 1 || nn == 1 ){
        cout<<(max(mm,nn))-1<<endl;
    }else{
        cout<<(mm-1)*nn<<endl;
    }
    
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