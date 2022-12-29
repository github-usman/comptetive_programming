#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll a[4];
    ll oneCnt = 0;
    for (int i = 0; i < 4; i++)
        {
            cin>>a[i];
            if(a[i] == 1){
                oneCnt++;
            }
        }
    if(oneCnt == 0){
        cout<<0<<endl;
    }else if(oneCnt == 4){
        cout<<2<<endl;
    }else {
        cout<<1<<endl;
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