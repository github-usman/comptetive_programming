#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    ll odd = 1;
    ll ans = 0;
    ll multiP;
    while(odd <= n){
        multiP = (n-odd)+1;
        ans += (multiP*multiP);
        odd = odd+2;
         
    }
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