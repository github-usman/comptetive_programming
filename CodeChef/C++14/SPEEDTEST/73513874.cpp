#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    double aa,bb,xx,yy;
    cin>>aa>>bb>>xx>>yy;

    double alice = aa/xx;
    double bob = bb/yy;

    if(alice>bob){
        cout<<"ALICE"<<endl;
    }else if(bob>alice){
        cout<<"BOB"<<endl;
    }else{
        cout<<"EQUAL"<<endl;
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