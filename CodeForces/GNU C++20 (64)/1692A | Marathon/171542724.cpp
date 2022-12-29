#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
 
    ll cnt = 0;
    if (b > a)
    {
        cnt++;
    }
    if (c > a)
    {
 
        cnt++;
    }
    if (d > a)
    {
        cnt++;
    }
 
    cout << cnt << endl;
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