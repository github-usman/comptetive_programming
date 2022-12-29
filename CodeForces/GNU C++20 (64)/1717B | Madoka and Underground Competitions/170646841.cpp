#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
 
////////////***First Approach***////////////
 
void driver()
{
     ll nn,kk,rr,cc;
  cin>>nn>>kk>>rr>>cc;
  ll alignSetter=(rr+cc)%kk;
  for(int i=1;i<=nn;i++)
  {
    for(int j=1;j<=nn;j++)
    {
        if((i+j)%kk==alignSetter){
            cout<<"X";
        }else{
            cout<<".";
        }
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