#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
    ll nn, mm;
    cin >> nn >> mm;
 
    vector<ll> vv;
    ll xx;
    ll prefixSum[nn] ={0};
    ll reversePrefixSum[nn]= {0};
    for (int i = 0; i < nn; i++)
    {
        cin >> xx;
        vv.emplace_back(xx);
    }
    ll s[mm],t[mm];
    for (int i = 0; i < nn; i++)
        {
            cin>>s[i]>>t[i];
        }
 
    ll totalSum = 0;
    for (int i = 0; i < nn-1; i++)
    {
        if(vv[i]>vv[i+1]){
            totalSum += (vv[i]-vv[i+1]);
            prefixSum[i+1] = totalSum;
        }
        prefixSum[i+1] = totalSum;
    }
 
    totalSum = 0;
    for (int i = (nn-1); i >=1; i--)
    {
        if(vv[i]>vv[i-1]){
            totalSum += (vv[i]-vv[i-1]);
            reversePrefixSum[i-1] = totalSum;
        }
        reversePrefixSum[i-1] = totalSum;
    }
 
    // for (int i = 0; i < nn; i++)
    //     {
    //         cout<<prefixSum[i]<<" ";
            
    //     }
    //     cout<<endl;
    //  for (int i = 0; i < nn; i++)
    //     {
    //         cout<<reversePrefixSum[i]<<" ";
            
    //     }
    //     cout<<endl;
    for (int i = 0; i < mm; i++)
        {
            if(s[i]<t[i]){
                cout<<prefixSum[t[i]-1]-prefixSum[s[i]-1]<<endl;
            }else{
                cout<<abs(reversePrefixSum[s[i]-1]-reversePrefixSum[t[i]-1])<<endl;
            }
        }
   
}
 
//////////////***Main Function***//////////////
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int t;
    // cin>>t;
 
    // while(t--)
    driver();
 
    return 0;
}