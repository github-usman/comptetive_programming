#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

    ll n;
    cin >> n;

    if((n%7 == 0 )|| (n%2 == 0) ||(n%9 == 0)){
        // cout<<n<<" = fn"<<endl;
        cout<<"YES"<<endl;
    }else if(n>7){
        ll rem = n-7;
        // cout<<n<<" = sn,"<<rem <<" =  rem"<<endl;
        if(rem%2 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
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