#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 ll n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 ll dtoast = c*d;
 ll nlToast = (k*l)/nl;
 ll npToast = p/np;
 
 ll ans = min(dtoast,npToast);
 ans = min(ans,nlToast);
 cout<<ans/n<<endl;
}
 
//////////////***Main Function***//////////////
int32_t main(){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 
 // int t;
 // cin>>t;
 
 // while(t--)
 driver();
 
 
 
 return 0;
}