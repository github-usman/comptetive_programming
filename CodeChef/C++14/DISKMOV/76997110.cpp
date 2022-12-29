#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll nn,kk;
////////////***First Approach***////////////
void driver(){


     
    cin >> nn >> kk;
    ll arr[nn+1];
  

    set<ll> singleOccurence;
    for (int i = 0; i < nn; i++)
    {
        cin >> arr[i];
        singleOccurence.insert(arr[i]);
    
    }
      ll maxVal = 0;
    for (int i = 0; i < nn; i++)
        {
           maxVal = max(maxVal, arr[i]); 
        }

              
    //     for (int i = 0; i < nn/2; i++)
    //     {
    //         val[i] = vv[(nn-i)-1]-vv[i];
    //         // cout<<vv[(nn-i)-1]<<" "<<vv[i]<<endl;
    //         // maxval = max(maxval,vv[i]);
            
    //     }

    ll cnt = 1;
    ll cnt1 = 0, cnt2 = 0;
    for (ll i = 1; i <= 2 * nn; i++)
    {
        if (cnt > kk)
        {
            break;
        }
        if (singleOccurence.find(i) == singleOccurence.end())
        {
            maxVal = max(maxVal, i);
            cnt1 += maxVal - i;
            cnt++;
        }
    }
    //  if(alreadyPalidrome){
    //     cout<<0<<endl;
    // }else{
         
    //     for (int i = 0; i < nn/2; i++)
    //     {
    //         val[i] = vv[(nn-i)-1]-vv[i];
    //         // cout<<vv[(nn-i)-1]<<" "<<vv[i]<<endl;
    //         // maxval = max(maxval,vv[i]);
            
    //     }

    //     // for (int i = 0; i < nn/2; i++)
    //     //     {
    //     //         cout<<val[i]<<" ";
    //     //     }
    //     //     cout<<endl;
       
    //     bool isDecreasing = true;
    //     ll maxVal = 0;
    //     for (int i = 0; i <(nn/2)-1; i++)
    //         {
    //             if(val[i]>=val[i+1]){
    //                 continue;
    //             }else{
    //                 // cout<<vv[i]<<" "<<val[i+1]<<endl;
    //                 isDecreasing = false;
    //             }
    cnt = 1;
    for (int i = 1; i <= 2 * nn; i++)
    {
        if (cnt > (kk - 1))
        {
            break;
        }
        if (singleOccurence.find(i) == singleOccurence.end())
        {
            cnt2 += ((2 * nn) - i);
            cnt++;
        }
    }
    cout << max(cnt1, cnt2) << endl;

    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    driver();



    return 0;
}