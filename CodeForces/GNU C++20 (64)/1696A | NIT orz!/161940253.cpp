#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll n, z;
 cin >> n >> z;
 
 vector<ll> vv;
 for (int i = 0; i < n; i++)
 {
  ll x;
  cin >> x;
 
  vv.emplace_back(x);
 }
 ll maxVal = INT_MIN;
 for (int i = 0; i < n; i++)
 {
  // cout<<vv[i]<<" pahle ";
  ll val = (vv[i]|z);
  vv[i] = val;
  // cout<<",baad me = "<<vv[i]<<" ,";
  maxVal = max(maxVal, vv[i]);
  z = (z & vv[i]);
 }
 cout<< maxVal << endl;
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