#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll nn;
 cin>>nn;
 
 vector<ll> vi;
 
 ll xx;
 ll maxVal = INT_MIN;
 ll minVal = INT_MAX;
 for (int i = 0; i < nn; i++)
  {
   cin>>xx;
   vi.emplace_back(xx);
   maxVal = max(xx,maxVal);
   minVal = min(xx,minVal);
  }
 ll maxDiff = 0;
 for (int i = 0; i < nn-1; i++)
  {
   maxDiff = max(maxDiff,vi[i]-vi[i+1]);
  }
 bool agalbagal = false;
 for (int i = 0; i < nn-1; i++)
  {
   if((vi[i] == maxVal && vi[i+1] == minVal)){
    agalbagal = true;
    break;
   }
  }
 
 ll ans = max((maxVal-vi[0]),(vi[nn-1]-minVal));
 ans = max(ans,maxDiff);
 cout<<ans<<endl;
 
 
 
}
 
//////////////***Main Function***//////////////
int32_t main(){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 
 int t;
 cin>>t;
 
 while(t--)
 driver();
 
 
 
 return 0;
}