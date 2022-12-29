#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn,mm;
    cin>>nn>>mm;
 
    vector<ll> vv;
    ll temp;
 
    for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
        }
    
    if(nn>mm){
        cout<<"NO"<<endl;
        return;
    }
    sort(vv.rbegin(),vv.rend());
 
    ll Allsum = (vv[0]+1);
    ll preVal = vv[0];
    for (int i = 0; i < nn-1; i++)
        {
            Allsum  += vv[i]+1;
        }
    // Allsum += 1;
    // cout<<Allsum<<endl;
   (Allsum<=mm)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    
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