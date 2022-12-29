#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

   ll nn,mm;
   cin>>nn>>mm;

   ll arr[nn];
   for (int i = 0; i < nn; i++)
       {
        cin>>arr[i];   
       }
    ll ans  = 0;
    for (int i = 0; i < nn; i++)
        {
            if(abs(mm-arr[i])>abs(arr[i]-1)){
                ans += abs(mm-arr[i]);
            }else{
               ans += abs(arr[i]-1);
            }
        }
        cout<<ans<<endl;
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