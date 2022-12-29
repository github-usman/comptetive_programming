#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll aa,bb,cc;
    cin>>aa>>bb>>cc;

    if(aa == bb){
        cout<<"YES"<<endl;
    }else{
        ll diff = abs(aa-bb);
        if(diff%cc == 0){
            ll val = diff/cc;
            if(val%2 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
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