#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    // vector<ll> vv;
    ll mid1 = n/2;
    ll mid2 = n/2;
    for (int i = 1; i <= n; i++)
        {
          if (i&1){
            cout<<++mid1<<" ";
          }else{
            cout<<mid2<<" ";
            mid2--;
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