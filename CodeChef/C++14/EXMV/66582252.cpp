#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

////////////***First Approach***////////////
void driver(){

    ll x,n;
    cin>>x>>n;

    if(x == 1){
        cout<<0<<endl;
    }else if( x == n){
        ll ans = --x*n;
        cout<<ans<<endl;
    }else{
        ll diff = n-x;
        ll left = (x-1)*x;
        // cout<<left<<" left0"<<endl;
        ll right = diff*(x-1);
        // cout<<right<<" = right "<<endl;
        ll ans = (right*2)+left;
        cout<<ans<<endl;
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