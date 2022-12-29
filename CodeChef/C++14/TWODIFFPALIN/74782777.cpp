#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll aa,bb;
    cin>>aa>>bb;

    if(aa%2 == 0 && bb%2 == 0){
        cout<<"YES"<<endl;
        return;
    }
   
    if((aa+bb)%2 == 1){

        if(aa == 1 || bb == 1){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        return;
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