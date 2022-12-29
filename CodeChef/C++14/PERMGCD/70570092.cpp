#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n,x;
    cin>>n>>x;

    if(x<n){
        cout<<-1<<endl;
        return;
    }
    ll val = x-n+1;
    cout<<val<<" ";
    for (int i = 0; i < n; i++)
        {
            if(val != (i+1)){
                cout<<(i+1)<<" ";
                
            }
           
        }
     cout<<endl;
            // return;
    
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