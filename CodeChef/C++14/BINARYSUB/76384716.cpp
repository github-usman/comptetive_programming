#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int tt[100001][3] = {0};
#define modulo 998244353
bool flag[100001];

////////////***First Approach***////////////
void driver()
{

    int nn;
    string ss;
    cin >> ss;
    nn = ss.size();
    for (int i = 1; i < nn; ++i)
    {
        flag[i] = ss[i] != ss[i - 1];
    }
    tt[0][0] = 1;
    //  bool flag112 = false;
    // for (int i = 0; i < nn; i++)
    // {
    //     if (i != nn - 1 && ss[i] == '0')
    //     {
    //         flag112 = true;
    //     }
    // }
    // // cout<<val<<endl;

    // if (flag112 == false)
    // {
    //     cout << nn << endl;
    //     // return;
    // }
    for (int i = 1; i < nn; ++i)
    {
        tt[i][0] = (tt[i - 1][0] + tt[i - 1][1]) % modulo;
        (flag[i] == 1) ? tt[i][1] = tt[i - 1][0] : tt[i][1] = 0;
    }
    cout << ((tt[nn - 1][0] + tt[nn - 1][1]) % modulo) << endl;
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