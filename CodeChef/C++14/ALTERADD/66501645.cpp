#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll a,b;
    cin>>a>>b;

    if(a==b){
        cout<<"YES"<<endl;
    }else{
        
       ll val = b-a;
       if(val%3 == 0 || val%3 ==1){
        cout<<"YES"<<endl;
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