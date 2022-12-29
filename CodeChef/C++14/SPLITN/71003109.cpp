#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll n;
    cin >> n;

    ll val = log2(n);
    // cout<<(pow(2,val));
    if (pow(2, val) == n)
    {
        cout << 0 << endl;
    }
    else
    {

        ll mainVal = floor(log2(n));
        ll remainVal = n - (pow(2, mainVal));
        n = n - (pow(2, mainVal));

        ll ans = 1;
        ll vval;
        while (1)
        {

            vval = floor(log2(n));
            // cout << vval << "vval" << endl;
            // cout << pow(2, vval) << " val" << endl;

            if (n == pow(2, vval) || n == 1)
            {

                cout << ans << endl;
                return;
            }
            mainVal = floor(log2(n));
            remainVal = n - (pow(2, mainVal));
            n = n - (pow(2, mainVal));
            ans++;
        }
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