#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

   if(n<5){
    cout<<"NO"<<endl;
    return;
   }

    ll i = 1;
    // ll a = 2,b = 2;
   ll formulaVal = (2*(i*2))+(i*i); 

    ll val = i+2;
    while(formulaVal<=n){
        // cout<<formulaVal<<"formula"<<endl;
        if(n == formulaVal){
            cout<<"YES"<<endl;
            // cout<<n<<" = YES"<<endl;
            // cout<<formulaVal<<" formular"<<endl;
            return;
        }
        // cout<<"val = "<<val<<" ";
        if((n-formulaVal)%val == 0){
            // cout<<n<<" = YES"<<endl;
            // cout<<" divide "<<endl;
            cout<<"YES"<<endl;
            return;
        }
        i++;
        val = i+2;
        formulaVal = (2*(i*2))+(i*i); 
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