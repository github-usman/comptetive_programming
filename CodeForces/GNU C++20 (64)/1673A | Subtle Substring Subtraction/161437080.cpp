#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    string s;
    cin >> s;
    ll size = s.size();
    if (size == 1)
    {
        ll val = s[0] - '0';
        val = val - 48;
 
        cout << "Bob"
             << " " << val << endl;
             return;
    }
    // cout << size << " size" << endl;
    if (size % 2 == 0)
    {
        ll sum = 0;
        for (int i = 0; i < size - 1; i++)
        {
            ll val = s[i] - '0';
            sum = sum + (val - 48);
            // cout << sum << " ";
        }
        ll sum2 = 0;
         for (int i = (size - 1); i >= 0; i--)
        {
            ll val = s[i] - '0';
            sum2 = sum2 + (val - 48);
            // cout<<sum2<<" i";
        }
        
        if (sum2 > sum)
        {
            cout << "Alice"
                 << " " << sum2 << endl;
        }
        else
        {
            cout << "Alice"
                 << " " << sum << endl;
        }
    }
    else
    {
        ll sum1 = 0, sum2 = 0;
        ll odd = 0,odd2 = 0;
 
        for (int i = 0; i < size - 1; i++)
        {
            ll val = s[i] - '0';
            sum1 = sum1 + (val - 48);
        }
        odd = (s[size - 1] - '0') - 48;
 
        for (int i = (size - 1); i > 0; i--)
        {
            ll val = s[i] - '0';
            sum2 = sum2 + (val - 48);
            // cout<<sum2<<" i";
        }
        odd2 = (s[0] - '0') - 48;
       // cout<<sum2<<" "<<sum1<<endl;
        if (sum2 > sum1)
        {
            cout << "Alice"
                 << " " << (sum2 - odd2) << endl;
        }
        else
        {
            cout << "Alice"
                 << " " << (sum1 - odd) << endl;
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