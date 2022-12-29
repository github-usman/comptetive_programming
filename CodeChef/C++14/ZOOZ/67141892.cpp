#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
  ll n;
  cin >> n;
  // cout<<n<<" = n"<<endl;

  string s = "";
  if (n % 2 == 0)
  {
    ll count = 0;
    string str = "1001";
    string str2 = "01";
    count = n / 4;
    if (n % 4 == 0)
    {
      for (int i = 0; i < count; i++)
      {
        s = s+str;
      }
    }
    else
    {
      s = s+"0";
      for (int i = 0; i < count; i++)
      {
        s = s+str;
      }
      s = s+"0";
      
    }

    cout<<s<<endl;
  }else{
    ll count = n/2;
    s = "0";
    string str2 = "10";
    for (int i = 0; i < count; i++)
      {
        s = s+str2;
      }
      cout<<s<<endl;

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