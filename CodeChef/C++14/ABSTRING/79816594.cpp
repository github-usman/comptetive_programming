#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    string ss;
    cin>>ss;

    if(nn&1){
        cout<<"NO"<<endl;
        return;
    }

    // if(nn == 2){
    //     if(ss[0] == ss[1]){
    //         cout<<"YES"<<endl;
    //         return;
    //     }else{
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }

    unordered_map<ll,ll> ump;
    for (int i = 0; i < nn; i++)
        {
            ump[ss[i]]++;
        }
    // ll firstVal = 0;
    for( auto x:ump){
       if(x.second%2 == 0){
        continue;
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