#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll nn;
    cin >> nn;

    if(nn == 4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
        return;
    }
    if (nn < 5)
    {
        cout << -1 << endl;
    }
    else
    {

        if (nn % 2 == 0)
        {

             vector<ll> vv;
            ll kend = (nn/2);
             
            ll k = 1;
            ll even = 2;
            
            for (int i = 0; i < nn; i++)
            {
                if((i+1)<= kend){
                    vv.emplace_back(k);
                    k += 2;
                }else{
                    vv.emplace_back(even);
                    even += 2;
                }
            }
            for (int i = 0; i < nn; i++)
                {
                   cout<<vv[i]<<" "; 
                }
                cout<<endl;
        }
        else
        {
             vector<ll> vv;
            ll kend = (nn/2)+1;
             
            ll k = 1;
            ll even = 2;
            
            for (int i = 0; i < nn; i++)
            {
                if((i+1)<= kend){
                    vv.emplace_back(k);
                    k += 2;
                }else{
                    vv.emplace_back(even);
                    even += 2;
                }
            }
            for (int i = 0; i < nn; i++)
                {
                   cout<<vv[i]<<" "; 
                }
                cout<<endl;
        }
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