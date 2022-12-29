#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    unsigned long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    double aa = a, bb = b, cc = c, dd = d;
   
 
    if (bb * cc == aa*dd)
    {
        cout << 0 << endl;
    }
    else if (a == 0 || c == 0)
    {
        cout<<1<<endl;
    }
    else
    {
        ll Dr = b * d;
        a = a * d;
        c = c * b;
        ll maxVal = max(a, c);
        ll minVal = min(a, c);
        if (maxVal % minVal == 0)
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