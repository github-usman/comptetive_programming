#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

  ll n,k,red,blue;

  cin>>n>>k>>red>>blue;

  ll minCost = 0;
  minCost = min(red,blue);

  ll ans = k*red;
  ans += (n-k)*minCost;
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