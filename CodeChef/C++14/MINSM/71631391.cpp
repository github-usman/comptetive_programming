#include<bits/stdc++.h>
using namespace std;

#define ll long long int


////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    vector<ll> vv;
    ll x;

    for (int i = 0; i < n; i++)
        {
           cin>>x;
           vv.emplace_back(x); 
        }
    ll first = vv[0];
    for (int i = 1; i < n; i++)
        {
            first = __gcd(first,vv[i]); 
        }

    cout<<first*n<<endl;
    
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