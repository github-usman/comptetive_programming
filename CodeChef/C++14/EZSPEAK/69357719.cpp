#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll n;
    string s;
    cin >> n >> s;

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {   
        ll localCnt = 0;
        for (int j = i; j < n; j++)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                break;
            }else{
                localCnt++;
            }
        }
        cnt = max(localCnt,cnt);
    }
    if(cnt >= 4){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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