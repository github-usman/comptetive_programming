#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll first = a-c;
    ll second = b-d;
    if(first == second){
        cout<<"Any"<<endl;
    }
    else if(first>second){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
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