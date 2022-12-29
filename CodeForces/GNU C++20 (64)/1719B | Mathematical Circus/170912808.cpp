#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll nn, kk;
 cin >> nn >> kk;
 
 if (kk % (4) == 0)
 {
  cout << "NO" << endl;
  return;
 }
 else
 {
  cout << "YES" << endl;
 
  if ((kk & 1) != 1)
  {
   vector<ll> arr1;
   vector<ll> arr2;
   ll k = 1;
   for (int i = 0; i < nn / 2; i++)
   {
    if (i & 1)
    {
     arr1.emplace_back(k);
     k++;
     arr1.emplace_back(k);
     k++;
    }
    else
    {
     arr2.emplace_back(k);
     k++;
     arr2.emplace_back(k);
     k++;
    }
   }
   if (nn % 4 == 0)
   {
    for (int i = 0; i < nn / 2; i++)
    {
     cout << arr1[i] << " ";
     i++;
     cout << arr1[i] << endl;
    }
 
    for (int i = 0; i < nn / 2; i++)
    {
 
     i++;
     cout << arr2[i] << " ";
     cout << arr2[i - 1] << endl;
    }
   }else{
    for (int i = 0; i < (nn / 2)-1; i++)
    {
     cout << arr1[i] << " ";
     i++;
     cout << arr1[i] << endl;
    }
 
    for (int i = 0; i < nn / 2; i++)
    {
 
     i++;
     cout << arr2[i] << " ";
     cout << arr2[i - 1] << endl;
    }
 
   }
  }
  else
  {
   ll m = 1;
   for (int i = 0; i < nn / 2; i++)
   {
    cout << m << " ";
    m++;
    cout << m++ << endl;
   }
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