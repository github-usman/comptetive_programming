#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    ll k,m;
    cin>>k>>m;
    ll bag = k*m;
    if(n%bag == 0){
        cout<<n/bag<<endl;
    }else{
        cout<<(n/bag) +1<<endl;
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