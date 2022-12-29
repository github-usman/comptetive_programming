#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
  ll nn;
  cin >> nn;
 
  ll arr[nn + 1];
  ll arrOne[nn + 1];
  ll arrZero[nn + 1];
 
  ll zeros = 0;
 
  ll sum = 0;
  for (int i = 0; i < nn; i++)
  {
    cin >> arr[i];
    arrOne[i] = arr[i];
    arrZero[i] = arr[i];
    if (arr[i] == 0)
    {
      zeros++;
    }
  }
 
  if (zeros == nn || zeros == 0)
  {
    cout << nn - 1 << endl;
    return;
  }
  ll ans[] = {0, 0, 0, 0, 0};
 
  for (int i = 0; i < nn; i++)
  {
    if (arrOne[i] == 0)
    {
      arrOne[i] = 1;
      break;
    }
  }
 
  for (int i = nn-1; i >= 0; i--)
  {
    if (arrZero[i] == 1)
    {
      arrZero[i] = 0;
       break;
    }
  }
 
  ll cnt = 0;
  for (int i = nn-1; i>= 0; i--)
      {
          if(arr[i] == 0){
            cnt++;
          }else{
            ans[0] += cnt;
          }
      }
 
     cnt = 0;
  for (int i = nn-1; i>= 0; i--)
      {
          if(arrOne[i] == 0){
            cnt++;
          }else{
            ans[1] += cnt;
          }
      }
 
       cnt = 0;
  for (int i = nn-1; i>= 0; i--)
      {
          if(arrZero[i] == 0){
            cnt++;
          }else{
            ans[2] += cnt;
          }
      }
 
      // cout<<ans[2]<<endl;
 
      cout<<max(ans[0],max(ans[1],ans[2]))<<endl;
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