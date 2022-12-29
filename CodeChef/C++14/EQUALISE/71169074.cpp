#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll a,b;
    cin>>a>>b;

    ll maxVal = max(a,b);
    ll minVal = min(a,b);
    while(maxVal>=minVal){
        if(maxVal == minVal){
            cout<<"YES"<<endl;
            return;
        }
        minVal *= 2;
    }
    cout<<"NO"<<endl;
    
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