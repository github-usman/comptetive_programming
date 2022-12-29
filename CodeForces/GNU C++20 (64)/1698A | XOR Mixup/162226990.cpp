#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll n;
 cin >> n;
 
 vector<ll> vv;
 for (int i = 0; i < n; i++)
 {
  ll x;
  cin >> x;
 
  vv.emplace_back(x);
 }
 int i = 0;
 while (i < n)
 {
 
  ll ans = 0;
  ll findAns = 0;
  // cout<<i<<" i"<<endl;
  for (int j = 0; j < n; j++)
  {
   if (i == j)
   { 
    ans = vv[j];
    // cout<<" ans = "<<ans<<endl;
    continue;
   }
   ll pq = vv[j];
   // cout<<pq<<" "<<findAns<<endl;
   findAns = findAns^pq;
   // cout<<findAns<<" find"<<endl;
 
 
  }
  if(findAns == ans){
   cout<<ans<<endl;
   return;
  }
 
  i++;
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