#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll alice,bob;
    cin>>alice>>bob;

    ll sum = alice+bob;

    if(sum%4 == 0){
        cout<<"Alice"<<endl;
    }else{
        ll rem = sum%4;
        if(rem == 1 ){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
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