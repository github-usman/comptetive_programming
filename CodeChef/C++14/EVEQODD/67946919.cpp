#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
    ll n;
    cin >> n;
    // cout << " check" << endl;
    vector<ll> vv;
    ll cnt = 0;
    vector<ll> evenVal;
    for (int i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;

        if (x % 2 == 0)
        {
            evenVal.emplace_back(x);
        }
        else
        {
            cnt++;
        }
        vv.emplace_back(x);
    }

    ll evenLength = ((2 * n) - cnt);

    if (evenLength == cnt)
    {
        cout << 0 << endl;
        return;
    }
    else if (cnt > evenLength)
    {
        cout << cnt - n << endl;
        return;
    }
    ll ans = 0;

    vector<pair<ll,ll>>  pairV;
    ll needLength = evenLength-n;

    for (auto i = evenVal.begin(); i != evenVal.end(); i++)
    {


        

        ll timesDivide = floor(log2(*i));
        if (pow(2, timesDivide) == (*i))
        {
            pairV.emplace_back(make_pair(timesDivide,*i));
        }
        else
        {
            ll val = *i;
            timesDivide = 0;
            while ((val % 2) != 1)
            {
                timesDivide++;
                val /= 2;
            }
            pairV.emplace_back(make_pair(timesDivide,*i));
        }
        // // evenLength--;
        // // cnt++;
        // ll occuringTimes = i->second;
        // if (occuringTimes >= (evenLength - n)){
        //     ll nNeed = (evenLength-n);
        //     ans = ans+timesDivide*nNeed;
        //     break;

        // }else{
            
        //     ans = ans+(timesDivide*occuringTimes);
        //     evenLength -= occuringTimes;
        // }

        //    cout << i->first
        //           << "  "
        //           << i->second << '\n';
    }
    // cout<<pairV.size()<<endl;

    // for ( auto i = 0;i <pairV.size();i++)
    // {
    //     cout<<pairV[i].first<<" "<<pairV[i].second<<endl;;   
    // }
    
    sort(pairV.begin(),pairV.end());
    // cout<<needLength<<endl;
    for ( auto i = 0;i <pairV.size();i++)
    {   needLength--;
        // cout<<pairV[i].first<<" "<<pairV[i].second<<endl;; 
        ans += pairV[i].first;  
        if(needLength <= 0){
            break;
        }
    }
    cout<<ans<<endl;
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