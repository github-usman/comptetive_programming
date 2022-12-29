#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll x,y,z;
    cin>>x>>y>>z;

    ll no_of_stop = x/3;
    if(x<=3){
        cout<<(x*y)<<endl;
    }
    else if(x%3 == 0){
        cout<<(--no_of_stop*z)+(x*y)<<endl;
    }else{
        cout<<(no_of_stop*z)+(x*y)<<endl;
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