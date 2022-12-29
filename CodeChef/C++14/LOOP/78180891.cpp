#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll aa,bb,mm;
    cin>>aa>>bb>>mm;

  
    
    ll minVal = min(aa,bb);
    ll maxVal = max(aa,bb);

   ll ans = min(abs(aa-bb),abs(mm-aa)+bb);
   ans = min(ans,abs(mm-bb)+aa);
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