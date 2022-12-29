#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll nn,xx;
 cin>>nn>>xx;
 
 vector<ll> vi;
 ll yy;
 
 for (int i = 0; i < 2*nn; i++)
  {
   cin>>yy;
   vi.emplace_back(yy);
  }
 sort(vi.begin(),vi.end());
 
 bool flag = true;
 for (int i = 0; i < nn; i++)
  {
   if((vi[nn+i]-vi[i])<xx){
    flag = false;
    break;
   }
  }
 (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
 
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