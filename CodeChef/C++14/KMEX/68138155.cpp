#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll n, m, k;
    cin >> n >> m >> k;

    set<ll> vv;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x != k)
        {
            cnt++;
            vv.emplace(x);
        }
    }

    if(k>m){
        cout<<"NO"<<endl;
        return;
    }
    ll i = 0;
    bool checkReachK = false;
    if (cnt >= m)
    {
        
        for (auto it = vv.begin(); it != vv.end(); it++)
        {
            if (i == k)
            {
                cout << "YES" << endl;
                return;
            }

            if (i == *it)
            {
                i++;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (i == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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