#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

   ll x;
   cin>>x;

    if(x%3 == 0){
        cout<<0<<endl;
    }else{
        ll rem = x%3;
        cout<<3-rem<<endl;
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