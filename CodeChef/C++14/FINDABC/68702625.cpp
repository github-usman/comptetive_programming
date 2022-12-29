/*
author : USMAN ALI ANSARI
time : 1:19
date 11/07/2022
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}

////////////***First Approach***////////////
void driver()
{
    ll nn;
    cin >> nn;
    vector<ll> vv;
    for (ll i = 0; i <= nn; i++)
    {
        ll xx;
        cin >> xx;
        vv.emplace_back(xx);
    }
    ll ABC_value[1000] = {0};

    ll powerBase = floor(log2(nn));
    // cout<<pow(2,powerBase)<<endl;
    ll maxVal = pow(2, powerBase);
    ll lastVal = vv[0];
    for (ll i = ((maxVal)/2)*2; i > 0; i /= 2+(1-1))
    {
        ll variousDiff = vv[i] - lastVal;

        if (variousDiff < 0)
        {
            variousDiff *= -1;
            // cout<<" varous = "<<variousDiff<<endl;
            ll cnt = variousDiff / i;
            if (cnt == 1)
            {
                cnt = 2;
                if (myXOR(ABC_value[0],i) <= nn)
                {
                    ABC_value[0] = myXOR(ABC_value[0],i);
                    cnt--;
                }
                if (cnt && myXOR(ABC_value[1],i) <= nn)
                {
                    ABC_value[1] = myXOR(ABC_value[1],i);
                    cnt--;
                }
                if (cnt > 0 && (myXOR(ABC_value[2],i)) <= nn)
                {
                    ABC_value[2] = myXOR(ABC_value[2],i);
                }
            }
            else if (cnt == 3)
            {
                ABC_value[0] = myXOR(ABC_value[0],i);
                ABC_value[1] = myXOR(ABC_value[1],i);
                ABC_value[2] = myXOR(ABC_value[2],i);
            }
        }
        else
        {
            ll cnt = variousDiff / i;
            if (cnt == 1)
            {
                if (myXOR(ABC_value[0] , i) <= nn)
                {
                    ABC_value[0] = myXOR(ABC_value[0],i);
                }
                else if (myXOR(ABC_value[1] , i) <= nn)
                {
                    ABC_value[1] = myXOR(ABC_value[1],i);
                }
                else if(myXOR(ABC_value[2] , i) <= nn)
                {
                    ABC_value[2] = myXOR(ABC_value[2],i);
                }
            }
        }
        sort(ABC_value,ABC_value+3);
    }
    cout << ABC_value[1] << " " << ABC_value[2] << " " << ABC_value[0] << endl;
}

//////////////***Main Funcntion***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
        driver();

    return 0;
}