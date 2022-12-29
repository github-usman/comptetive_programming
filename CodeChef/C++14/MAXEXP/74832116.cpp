#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll nn;
    cin >> nn;

    string ss;
    cin >> ss;

    vector<char> num;
    vector<char> symbol;

    for (int i = 0; i < nn; i++)
    {
        if (ss[i] != '-' && ss[i] != '+')
        {
            num.emplace_back(ss[i]);
        }
        else
        {
            symbol.emplace_back(ss[i]);
        }
    }

  
    ll nmm = num.size();
    ll symm = symbol.size();
    sort(num.rbegin(), num.rend());
    sort(symbol.begin(), symbol.end());
    vector<char> newAns;
//   for (int i = 0; i <num.size(); i++)
//         {
//             cout<<num[i];
//         }
//         cout<<endl;
//       for (int i = 0; i <symbol.size(); i++)
//         {
//             cout<<symbol[i];
//         }
//         cout<<endl;
    ll k = 0;
    ll minus = 0;
    ll minus2 = 0;
    for (int i = (nn-1);i>= 0;i--)
    {

        if (k % 2 == 0 && ((nmm - 1) - minus) >= 0)
        {

            newAns.emplace_back(num[((nmm - 1) - minus)]);
            minus++;
            k++;
            continue;
        }

        if (k % 2 == 1  && ((symm - 1) - minus2) >= 0)
        {

            newAns.emplace_back(symbol[((symm - 1) - minus2)]);
            minus2++;
            k++;
            continue;
        }

        if (((nmm - 1) - minus) >= 0)
        {
            newAns.emplace_back(num[((nmm - 1) - minus)]);
            minus++;
            k++;
            continue;
        }

        if (((symm - 1) - minus2) >= 0)
        {
            ll minus2 = 0;
            newAns.emplace_back(symbol[((symm - 1) - minus2)]);
            minus2++;
            k++;
            continue;
        }
    }
    for (int i = nn-1; i >= 0; i--)
    {
        cout << newAns[i];
    }
    cout << endl;
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