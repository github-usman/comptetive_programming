#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()

{
    ll nn, mm, xx;
    vector<int> vvA, vvB, vvC, vvD;
    // vvA.emplace_back(0);
    // vvA.emplace_back(0);
    // vvA.emplace_back(0);
    // vvA.emplace_back(0);
    cin >> nn >> mm;
    if (nn == 1)
    {
        for (int i = 0; i < mm; ++i)
        {
            cin >> xx;
            vvA.push_back(xx);
        }
        for (int i = 0; i < mm; ++i)
        {

            cin >> xx;
            vvB.push_back(xx);
        }
        (vvA == vvB) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    else if (mm == 1)

    {
        for (int i = 0; i < nn; ++i)
        {
            cin >> xx;
            vvA.push_back(xx);
        }
        for (int i = 0; i < nn; ++i)
        {

            cin >> xx;
            vvB.push_back(xx);
        }
        (vvA == vvB) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    else
    {

        for (int i = 0; i < nn; ++i)
            for (int j = 0; j < mm; ++j)
            {
                cin >> xx;
                ((i ^ j) & 1) ? vvA.push_back(xx) : vvB.push_back(xx);
            }
        for (int i = 0; i < nn; ++i)
            for (int j = 0; j < mm; ++j)
            {
                cin >> xx;
                ((i ^ j) & 1) ? vvC.push_back(xx) : vvD.push_back(xx);
            }
        sort(vvA.begin(), vvA.end());
        sort(vvB.begin(), vvB.end());
        sort(vvC.begin(), vvC.end());
        sort(vvD.begin(), vvD.end());
        (vvA == vvC && vvB == vvD) ? cout << "YES" << endl : cout << "NO" << endl;
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