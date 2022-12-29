#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if((x1+y1) <( x2+y2)){
        cout<<(x1+y1)<<endl;
    }else{
        cout<<(x2+y2)<<endl;
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