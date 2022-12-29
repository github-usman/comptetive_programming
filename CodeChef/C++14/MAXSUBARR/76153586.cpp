#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll nn, mm;
    cin >> nn;
    ll temp;
    vector<ll> aa;

    for (int i = 0; i < nn; i++)
    {
        cin >> temp;
        aa.emplace_back(temp);
    }
    vector<ll> bb;
    cin >> mm;
    for (int i = 0; i < mm; i++)
    {
        cin >> temp;
        bb.emplace_back(temp);
    }

    // ll aLeftMax = INT_MIN;
    // ll aRight = INT_MIN;

    // cout<<aLeftMax<<" "<<aRight<<endl;

    // for (int i = 0; i < nn; i++)
    //     {
    //         if(aa[i]<0){
    //             break;
    //         }else{
    //             aLeftMax += aa[i];
    //         }

    //     }
    // for (int i = nn-1; i>=0; i--)
    //     {
    //         if(aa[i]<0){
    //             break;
    //         }else{
    //             aRight += aa[i];
    //         }

    //     }
    // for (int i = 0; i < nn; i++)
    //     {
    //        cout<<aa[i]<<" ";
    //     }
    // for (int i = 0; i < nn; i++)
    //     {

    //     }
    // if(aRight>aLeftMax){
    //     // cout<<"right";
    //     while (bb.size()>0)
    //     {
    //         if(bb.front()>bb.back() && bb.front() >= 0){
    //             aa.emplace_back(bb.front());
    //             bb.pop_front();
    //         }else if(bb.back() >= 0){
    //             aa.emplace_back(bb.back());
    //             bb.pop_back();
    //         }else{
    //             if(bb.front()>bb.back()){
    //                 aa.emplace_front(bb.front());
    //                 bb.pop_front();
    //             }else{
    //                 aa.emplace_front(bb.back());
    //                 bb.pop_back();
    //             }

    //         }
    //     }

    // }else{
    //     // cout<<"left"<<endl;
    //      while (bb.size()>0)
    //     {
    //         if(bb.front()>bb.back() && bb.front() >= 0){
    //             aa.emplace_front(bb.front());
    //             bb.pop_front();
    //         }else if(bb.back() >= 0){
    //             aa.emplace_front(bb.back());
    //             bb.pop_back();
    //         }else{
    //             if(bb.front()>bb.back()){
    //                 aa.emplace_back(bb.front());
    //                 bb.pop_front();
    //             }else{
    //                 aa.emplace_back(bb.back());
    //                 bb.pop_back();
    //             }

    //         }
    //     }
    // }

    // ll cnt1 = 0,cnt2= 0,cnt3 = 0;
    // ll maxVal = 0;
    // for (auto it = aa.begin(); it != aa.end(); it++)
    //     {
    //         cnt1 += *it;
    //         // if(*it<0){
    //         //     cnt1 = 0;
    //         // }
    //         maxVal = max(cnt1,maxVal);
    //         // cout<<*it<<" ";
    //     }

    // for (auto it = aa.rbegin(); it != aa.rend(); it++)
    //     {
    //         cnt2 += *it;

    //         maxVal = max(cnt2,maxVal);
    //         // cout<<*it<<" ";
    //     }

    // for (auto it = aa.begin(); it != aa.end(); it++)
    //     {
    //         cnt3 += *it;
    //         if(*it<0){
    //             cnt3 = 0;
    //         }
    //         maxVal = max(cnt3,maxVal);
    //         // cout<<*it<<" ";
    //     }
    //     // cout<<endl;
    ll cnt = 0;
    ll maxVal = INT_MIN;
    for (int i = 0; i < nn; i++)
    {
        cnt += aa[i];
        maxVal = max(cnt, maxVal);
    }

    cnt = 0;
    for (int i = (nn - 1); i >= 0; i--)
    {
        cnt += aa[i];
        maxVal = max(cnt, maxVal);
    }

    ll sum = 0;
    for (int i = 0; i < mm; i++)
    {
        if (bb[i] > 0)
        {
            sum += bb[i];
        }
    }

    maxVal += sum;
    cout << maxVal << endl;
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