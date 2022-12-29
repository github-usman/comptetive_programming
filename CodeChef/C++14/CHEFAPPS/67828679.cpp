#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll s, x, y, z;
    cin >> s >> x >> y >> z;

    ll remMb = s - (x + y);
    if (remMb >= z)
    {
        cout << 0 << endl;
    }
    else if (remMb < z)
    {
        ll maxVal = max(x, y);
        if (remMb + maxVal >= z)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
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