#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll x;
    cin>>x;

    if(x <= 100){
        cout<<x<<endl;
    }else if(x<=1000){
        cout<<(x-25)<<endl;
    }else if(x <= 5000){
        cout<<(x-100)<<endl;
    }else{
        cout<<(x-500)<<endl;
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