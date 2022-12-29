#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll nn;
    string ss;
    cin >> nn >> ss;

    // if(nn == 5 && ss == "11000"){
    //     cout<<"1"<<" "<<"4"<<" "<<"1"<<"\n";
    //     cout<<"1"<<" "<<"2"<<" "<<"1"<<endl;
    //     return;
    // }

//     string ss;
//     cin>>ss;
//     ll nn = ss.size();
//     ll startString = ss[0]-'0'-48,endString = ss[nn-1]-'0'-48;
//     // cout<<startString<<" "<<endString<<endl;

    vector<pair<ll,ll>> vmap;

    // ll maxVal = max(startString,endString);
    // ll minVal = min(startString,endString);

//     for (int i = 0; i < nn; i++)
//         {
//            if(minVal <= (ss[i]-'0'-48) && (ss[i]-'0'-48) <= maxVal){
//             vmap.emplace_back(make_pair((ss[i]-'0'-48),i+1));
//            }else{
//             continue;
//            } 
//         }
//     sort(vmap.begin(),vmap.end());
// //     ll totalCost = 0;
// //        for (int i = 0; i < vmap.size()-1; i++)
// //         {
          
// //            totalCost += abs(vmap[i].first-vmap[i+1].first);
// //         }
// //    cout<<totalCost<<" "<<vmap.size()<<endl;
//     for (int i = 0; i < vmap.size(); i++)
//         {
          
//            cout<<vmap[i].first<<" ";
//         }
// 		cout<<endl;
// 	  for (int i = 0; i < vmap.size(); i++)
//         {
          
//             cout<<vmap[i].second<<" ";
//         }
//     // cout<<1<<" ";
    
//     //    for (int i = 0; i < vmap.size(); i++)
//     //     {
//     //         if(vmap[i].second == 1 || vmap[i].second == nn){
//     //             continue;
//     //         }
//     //         cout<<vmap[i].second<<" ";
         
//     //     }
//     //     // cout<<endl;
//     // cout<<nn<<endl;





    int zeroF = 0, oneF = 0;
    for (char c : ss)
    {
        zeroF += (c == '0');
        oneF += (c == '1');
    }
    if (zeroF == 0)
    {
        cout << nn << ' ' << 0 << endl;
        return;
    }
    if (oneF == 0)
    {
        cout << nn << ' ' << 0 << endl;
        return;
    }
    cout << 1 << ' ' << abs(zeroF - oneF) + 1 << endl;
    ll queryy = 0;
    
    for (int i = 0; i < abs(zeroF - oneF); ++i)
    {
        string t;
        // nn = ss.size();
        for (int j = 0; j <ss.size() - 1; ++j)
            if ((ss[j] == '0' && ss[j + 1] == '1') || (ss[j] == '1' && ss[j + 1] == '0'))
            {
                queryy = j;
                break;
            }
        cout << queryy + 1 << ' ' << queryy + 2 << ' ' << (zeroF > oneF) << endl;
        // nn = ss.size();
        for (int j = 0; j <ss.size(); ++j)
            if (j != queryy && j != queryy + 1)
                t += ss[j];
            else if (j == queryy)
                t += char((zeroF > oneF) + 48);
        ss = t;
    }
    nn = ss.size();
    cout << 1 << ' ' << nn << ' ' << 0 << endl;
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