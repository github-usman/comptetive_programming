#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***Final Approach***////////////
 
void driver(){
    ll nn,H,M;
    cin>>nn>>H>>M;
 
    ll bedMinutes = (H*60)+(M);
 
    vector<ll> vv;
    ll h,m;
    bool negFlag = true;
    bool equal = false;
    for (int i = 0; i < nn; i++)
        {
            cin>>h>>m;
            vv.emplace_back((h*60)+(m));
            if(vv[i]>bedMinutes){
                negFlag = false;
            }
            if(vv[i] == bedMinutes){
                equal = true;
            }
        }
 
 
    ll minDiff = 25*60;
    if(equal){
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(negFlag == false){
        // cout<<"here";
        for (int i = 0; i < nn; i++)
            {
                if(vv[i]>bedMinutes && vv[i]<minDiff){
                    minDiff = vv[i];
                }
            }
        ll hh = (minDiff-bedMinutes)/60;
        ll mint = (minDiff-bedMinutes)%60;
        cout<<hh<<" "<<mint<<endl;
        return;
    }
    sort(vv.begin(),vv.end());
    ll ans = vv[0]+(24*60-bedMinutes);
     ll hh = ans/60;
        ll mint = ans%60;
        cout<<hh<<" "<<mint<<endl;
    
}
 
 
////////////***First Approach***////////////
// void driver()
// {
//     ll nn, H, M;
//     cin >> nn >> H >> M;
 
//     ll h, m;
 
 
 
 
//     multimap<ll, ll> mp;
//     bool flag = false;
//     int ind_i = 0, ind_j = 0;
 
//     ll minVal_h = 1000;
//     ll minVal_m = 1000;
 
//     for (int i = 0; i < nn; i++)
//     {
//         cin >> h >> m;
//         // vv.emplace(h,m);
//         if (H == h and M == m)
//         {
//             flag = true;
//         }
//         mp.insert(make_pair(h, m));
//     }
 
//     // for (auto it = mp.begin(); it != mp.end(); it++){
//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }
 
//     int i = 0;
//     ll findindex = i;
//     ll diffH = 0, diffM = 0;
//     if (flag)
//     {
//         cout << 0 << " " << 0 << endl;
//         return;
//     }
//     else
//     {
//         for (auto it = mp.begin(); it != mp.end(); it++)
//         {
 
//             if (((it->first)) > H)
//             {
//                 if (it->second > M)
//                 {
//                     cout << ((it->first)) - H << " " << (it->second - M) << endl;
//                     return;
//                 }
//                 else
//                 {
//                     cout << (((it->first)) - H) - 1 << " " << (it->second + 60 - M) << endl;
//                     return;
//                 }
//             }
//             else if (((it->first)) == H && it->second > M)
//             {
//                 if (it->second > M)
//                 {
//                     cout << ((it->first)) - H << " " << (it->second - M) << endl;
//                     return;
//                 }
//                 else
//                 {
//                     cout << 23 << " " << (it->second + 60 - M) << endl;
//                     return;
//                 }
//             }
          
//             if (diffH < (H - it->first))
//             {
//                 findindex = i;
//                 diffH = (H - it->first);
//             }
//             else if (diffH == (H - it->first) && diffM < (M - it->second))
//             {
//                 findindex = i;
//                 diffM = (M - it->second);
 
//             }
//               i++;
//         }
//         ll k = 0;
//         // cout<<findindex<<" i =="<<endl;
//         for (auto it = mp.begin(); it != mp.end(); it++)
//         {
//             if (k == findindex)
//             {
//                 // if (it->first != H)
//                 // {
//                     // cout<<it->first<<" "<<it->second<<endl;
//                 if (it->second > M)
//                 {
//                     cout << (24 + it->first)-H << " " << (it->second - M) << endl;
//                     return;
//                 }
//                 else
//                 {
//                     cout << ((24 + it->first)-H ) - 1 << " " << (it->second + 60 - M) << endl;
//                     return;
//                 }
//             }
//             // else
//             // {
//             //     cout <<  << " " << (it->second + 60 - M) << endl;
//             //     return;
//             // }
//             k++;
//         }
        
//     }
 
//     // if (minVal_h < 0)
//     // {
//     //     cout << 24 - minVal_h << " " << minVal_m << endl;
//     // }
//     // else
//     // {
//     //     cout << minVal_h << " " << minVal_m << endl;
//     // }
// }
 
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