#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n,x;
    cin>>n>>x;

   
    ll grp = n/6;

    if(n%6 != 0){
        cout<<x*(grp+1)<<endl;
    }else{
        cout<<x*grp<<endl;
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