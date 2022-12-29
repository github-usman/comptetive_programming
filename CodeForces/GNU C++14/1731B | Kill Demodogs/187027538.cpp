#include<bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
 
#define ll long long int
 
////////////***First Approach***////////////n%1000000007)*((2*n+1)%1000000007)%1000000007)*(n+1)%1000000007
void driver(){
 
        long long int n;
        cin >> n;
        ll res = (((n * (n + 1)) % MOD) * (2 * n + 1)) % MOD;
        res = (res * 337) % MOD;
        res = (res + (((((n - 1) * (n + 1)) % MOD) * n) % MOD) * 674) % MOD;
        cout << res << endl;
 
 
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