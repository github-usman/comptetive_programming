#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    ll maxVal = -1;

    ll arr[nn];
    for (int i = 0; i < nn; i++)
        {   
            cin>>arr[i];
            
        }
    for (int i = 0; i < nn; i++)
        {
            maxVal = max(maxVal,arr[i]);
        }
        cout<<maxVal<<endl;
    
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