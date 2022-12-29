#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

////////////***First Approach***////////////
void driver()
{

    ll x, y;
    cin >> x >> y;

    ll maxVal = max(x, y);
    ll minVal = min(x, y);

    if (minVal == maxVal)
    {
        cout << minVal << endl;
        return;
    }
    else if (minVal == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll count = 0;
        ll preVal = 0;

        while (minVal < maxVal)
        {
            
            preVal = minVal;
            
                minVal *= 2;
                count++;
                
        }

        if (minVal == maxVal)
        {
            cout << maxVal + count << endl;
        }
        else
        {
            ll diff = maxVal - preVal;
            if (diff < preVal)
            {
                cout << (count) + maxVal << endl;
            }
            else
            {
                cout << count + minVal << endl;
            }
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