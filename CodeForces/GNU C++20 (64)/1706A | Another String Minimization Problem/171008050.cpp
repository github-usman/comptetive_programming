#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll nn, mm;
 cin >> nn >> mm;
 
 vector<ll> a;
 vector<char> ss(mm, 'B');
 ll xx;
 for (int i = 0; i < nn; i++)
 {
  cin >> xx;
  a.emplace_back(xx);
 }
 ll val;
 ll maxVal = -1;
 ll minVal = 51;
 ll kk = 0;
 for (int i = 0; i < nn; i++)
 { 
  val = a[i];
 
  if (ss[(a[i]-1)] == 'B' && ss[(((mm + 1) - val) - 1)] == 'B')
  {
   if((a[i]-1)<(((mm + 1) - val) - 1)){
    ss[a[i]-1] = 'A';
   }else{
    ss[(((mm + 1) - val) - 1)] = 'A';
   }
   
   kk++;
  }else if(ss[a[i]-1] == 'B'){
   ss[a[i]-1] = 'A';
   kk++;
  }else if(ss[(((mm + 1) - val) - 1)] == 'B'){
   ss[(((mm + 1) - val) - 1)] = 'A';
   kk++;
  }
  if(kk == nn){
   break;
  }
  
 }
 // for (int i = 0; i < nn; i++)
 // {
 
 //  val = a[i];
 //  if(kk == nn){
 //   break;
 //  }
 //  if (ss[(((mm + 1) - val) - 1)] == 'B')
 //  {
 //   ss[(((mm + 1) - val) - 1)] = 'A';
 //   kk++;
 //  }
 //  if(kk == nn){
 //   break;
 //  }
  
 // }
 
 for (int i = 0; i < mm; i++)
 {
  cout << ss[i];
 }
 
 cout << endl;
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