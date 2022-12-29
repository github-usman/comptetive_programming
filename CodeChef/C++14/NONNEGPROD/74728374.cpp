#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    vector<ll> vv;
    ll temp;

    ll negat = 0;
    
    bool zero  = false;
    for (int i = 0; i < nn; i++)
        {
           cin>>temp;
           vv.emplace_back(temp); 
           if(vv[i] == 0){
            zero = true;
           }

           if(vv[i] <  0){
            negat++;
            // cout<<"here";
           }
        }
    if(zero == true){
        cout<<0<<endl;
        return;
    }

    if(negat>0){
        cout<<negat%2<<endl;
        return;
    }else{
        cout<<0<<endl;
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