#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    ll arr[n];
    ll countOne = 0;
    ll countNon = 0;
    for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] == 1){
                countOne++;
            }else{
                countNon++;
            }
        }
    if(n%2 == 1){
        cout<<-1<<endl;
    }else{
        ll half = n/2;
        countOne = half-countOne;
        countNon = half-countNon;
        ll ans = 0;
        if(countNon>0){
            ans = ans+countNon;
        }

        if(countOne>0){
            ans = ans+countOne;
        }

        cout<<ans<<endl;
    }
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    driver();



    return 0;
}