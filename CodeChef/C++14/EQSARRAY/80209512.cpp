#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll nn, kk;
    cin >> nn >> kk;

    vector<ll> vv;
    ll temp;
    ll cnt = 0;

    bool isAavailable = false;
    for (int i = 0; i < nn; i++)
    {
        cin >>temp;
        vv.emplace_back(temp);
        if (vv[i] == kk and i != nn - 1)
        {
            isAavailable = 1;
        }
    }
    if (nn == 1 and kk == vv[0])
    {
        cout << "YES"<<endl;
        return;
    }
    if (!isAavailable)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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