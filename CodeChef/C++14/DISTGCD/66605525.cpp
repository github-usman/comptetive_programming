#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll a,b;
    cin>>a>>b;

    ll diff = abs(a-b);

    ll count = 0;
    for(int i=1;i<=sqrt(diff);i++){
        if(diff%i == 0){
            // count++;
            if(diff/i == i){
                count++;
            }else{
                count += 2;
            }
        }
    }
    cout<<count<<endl;
    // cout<<endl;
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