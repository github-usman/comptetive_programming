#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    ll arr[n];  
    for (int i = 0; i < n; i++)
        {
          cin>>arr[i];  
        }
    ll maxVal = arr[0];
    ll minVal = arr[0];

    for (int i = 0; i < n; i++)
        {
            if(arr[i] >=maxVal || arr[i] <=minVal){
                minVal = min(minVal,arr[i]);
                maxVal = max(maxVal,arr[i]);
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    cout<<"YES"<<endl;
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