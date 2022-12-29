#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll ww,xx,yy,zz;
    cin>>ww>>xx>>yy>>zz;

    ll ans = ww+((xx-yy)*zz);
    cout<<ans<<endl;

    
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