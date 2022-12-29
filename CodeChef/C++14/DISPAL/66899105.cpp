#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll n, x;
    cin >> n >> x;

    if (n == 1 && x == 1)
    {
        cout << "a" << endl;
        return;
    }

    if (n % 2 == 0)
    {

        if (x <= n / 2)
        {
            int a = 96;
            string s = "";
            for (int i = 0; i < n / 2; i++)
            {
                if (i < x)
                {
                    a++;
                }
                char c = a;
                s += c;
               
            }
            cout << s;
            for (int i = (n / 2) - 1; i >= 0; i--)
            {
                cout << s[i];
            }

            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (x <= (n / 2) + 1)
        {
            int a = 96;
            string s = "";
            for (int i = 0; i < n / 2 + 1; i++)
            {
                if (i < x)
                {
                    a++;
                }
                char c = a;
                s += c;
            }
            cout << s;
            // cout << " now ";
            for (int i = (n / 2) - 1; i >= 0; i--)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
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