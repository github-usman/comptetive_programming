#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll x,y,z;
    cin>>x>>y>>z;

    if(x <= y){
        cout<<z<<endl;
    }else{
        ll val = x/y;
        // cout<<val<<endl;
        if(x%y == 0){
            cout<<val*z<<endl;
        }else{
            cout<<val*z + z<<endl;
        }
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