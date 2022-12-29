#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll n;
    cin >> n;

    vector<int> animal;
    int temp;

    unordered_map<ll, ll> ump;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        animal.push_back(temp);
        ump[animal[i]]++;
    }

    bool allisEven = true;
    int first;
    for (auto x : ump)
    {
        if (x.second % 2 != 0)
        {
            allisEven = false;
        }
        first = x.second;
    }
    int size = ump.size();

    if (allisEven == true)
    {
        cout << "YES" << endl;
    }
    // else if (size == 2)
    // {
    //     // bool same = true;
    //     // for (auto x : ump)
    //     // {
    //     //     if (x.second != first)
    //     //     {
    //     //         same = false;
    //     //     }
    //     //     if (same)
    //     //     {
    //     //         cout << "YES" << endl;
    //     //     }
    //     //     else
    //     //     {
    //     //         cout << "NO" << endl;
    //     //     }
    //     // }
    // }
    else
    {
        cout << "NO" << endl;
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