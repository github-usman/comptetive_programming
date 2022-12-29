#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 ll nn;
 cin >> nn;
 
 cout << nn << endl;
 vector<ll> vv;
 
 for (int i = 0; i < nn; i++)
 {
  cout << i + 1 << " ";
  vv.emplace_back(i + 1);
 }
 
 cout << endl;
 for (int i = 0; i < nn-1; i++)
 {
  ll temp = vv[i];
  vv[i] = vv[i + 1];
  vv[i + 1] = temp;
 
  for (int j = 0; j < nn; j++)
  {
   cout<<vv[j]<<" ";
  }
  cout<<endl;
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