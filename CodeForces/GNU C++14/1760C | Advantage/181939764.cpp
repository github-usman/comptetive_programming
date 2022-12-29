#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    vector<ll> vv;
    ll arr[nn];
    ll temp;
    for (int i = 0; i < nn; i++)
        {
            
            cin>>arr[i];
 
            vv.emplace_back(arr[i]);
        }
 
    sort(vv.rbegin(),vv.rend());
 
    ll maxVal = vv[0];
    ll secMax = vv[1];
 
    for (int i = 0; i < nn; i++)
        {
            if(maxVal == arr[i]){
                cout<<maxVal-secMax<<" ";
            }else{
                cout<<arr[i]-maxVal<<" ";            }
        }
 
        cout<<endl;
 
 
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