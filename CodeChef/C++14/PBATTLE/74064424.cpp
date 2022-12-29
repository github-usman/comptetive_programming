#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll nn;
    cin >> nn;
    ll g[nn];
    ll w[nn];
    for (ll i = 0; i < nn; i++)
    {
        cin >> g[i];
    }
    for (ll i = 0; i < nn; i++)
    {
        cin >> w[i];
    }

    vector<pair<ll, ll>> v;
    for (ll i = 0; i < nn; i++)
    {
        v.push_back(make_pair(g[i], w[i]));
    }
    sort(v.begin(), v.end());
    ll comp = v[nn-1].second;
    ll count = 1;
    for (ll i = v.size() - 2; i >= 0; i--)
    {
        if (v[i].second > comp)
        {
            comp = v[i].second;
            count++;
        }
    }
    cout << count << endl;
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
        driver();

    return 0;
}