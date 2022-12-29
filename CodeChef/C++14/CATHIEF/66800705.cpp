#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll x, y, k, N;
    cin >> x >> y >> k >> N;

    ll maxVal = max(x, y);
    ll minVal = min(x, y);

    ll diff = maxVal - minVal;
    if(diff%(2*k) == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
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