#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll n;
    cin >> n;

    vector<ll> chef, chefina;
    int temp1, temp2;

    for (int i = 0; i < n; i++)
    {
        cin >> temp1;
        chef.push_back(temp1);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp2;
        chefina.push_back(temp2);
    }

    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (chef[i] == 0 || chefina[i] == 0){
            ans = max(cnt ,ans);
            cnt = 0;
        }else{
            cnt++;
        }
    }
    ans = max(cnt,ans);
    cout<<ans<<endl;
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        driver();

    return 0;
}