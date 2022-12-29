#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
 ll nn;
 cin >> nn;
 
 ll xx, yy;
 ll ans = 0;
 ll up = -1, left = 1, right = -1, down = 1;
 bool flag1 = false,flag2 = false,flag3 = false,flag4 = false;
 for (int i = 0; i < nn; i++)
 {
  cin>>xx>>yy;
  
  if(yy == 0){
   // right value is here
   if(xx>0){
    // cout<<xx<<"(+) xx"<<yy<<endl;
    right = max(right,xx);
    flag1 = true;
   }else{
    // cout<<xx<<"(-) xx"<<yy<<endl;
    left = min(left,xx);
    flag2 = true;
   }
 
  }else{
   // right value is here
   if(yy>0){
    // cout<<xx<<"(+)yy "<<yy<<endl;
    up = max(up,yy);
    flag3 = true;
   }else{
    // cout<<xx<<"(-) yy"<<yy<<endl;
    down = min(down,yy);
    flag4 = true;
   }
 
  }
 }
 
 if(flag1){
  ans += (2*right);
 }
 if(flag2){
  ans += (2*abs(left));
 }
 if(flag3){
  ans += (2*up);
 }
 if(flag4){
  ans += (2*abs(down));
 }
 cout<<ans<<endl;
 
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