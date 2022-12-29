#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn;
    cin >> nn;
 
    // vector<ll> even, Odd;
 
    // if (nn < 4)
    // {
    //     for (int i = 0; i < nn; i++)
    //     {
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
 
    ll mid = (nn / 2)+1;
    ll st = 1;
 
    if (nn & 1)
    {
        for (int i = 0; i < nn-1; i++)
        {
            if (i & 1)
            {
                cout << st << " ";
                st += 1;
            }
            else
            {
 
                cout << mid << " ";
                mid += 1;
            }
        }
        cout << nn << " ";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < nn; i++)
        {
            if (i & 1)
            {
                cout << st << " ";
                st += 1;
            }
            else
            {
 
                cout << mid << " ";
                mid += 1;
            }
        }
        cout << endl;
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