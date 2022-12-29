#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    
    ll n,m;
    cin>>n>>m;

    ll divCandies = n/m;

    if(n%m == 0 && divCandies%2 == 0 ){
        cout<<"YES"<<endl;
    }else{
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