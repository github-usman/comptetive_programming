#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn;
    cin >> nn;
 
    vector<ll> a;
    vector<ll> b;
    for (int i = 0; i < nn; i++)
    {
        ll xx;
        cin >> xx;
        a.emplace_back(xx);
    }
    for (int i = 0; i < nn; i++)
    {
        ll yy;
        cin >> yy;
        b.emplace_back(yy);
    }
   bool ans = true;
 
 ll mn = INT_MAX, mx = INT_MIN;
 
 for (int i = 0; i < nn; i++) {
  if (b[i] > a[i]) {
   ans = false;
   break;
  }
 
  if (b[i] > 0) {
   mn = min(mn, a[i] - b[i]);
   mx = max(mx, a[i] - b[i]);
  } else {
   mx = max(mx, a[i] - b[i]);
  }
 }
 
 if (mx > mn) {
  ans = false;
 }
 
 if (ans) {
  cout << "YES\n";
 } else {
  cout << "NO\n";
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