#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;


    vector<ll> vv;

    ll temp;
    unordered_map<ll,ll> ump;
    for (int i = 0; i < nn*2; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            ump[vv[i]]++;
        }


    ll maxFreq = -1;
    for(auto x:ump){
        // cout<<x.first<<" "<<x.second<<endl;
        maxFreq = max(x.second,maxFreq);
    }

    // cout<<maxFreq<<endl;

    if(nn == 1){
        cout<<"YES"<<endl;
        // cout<<" val == 1"<<endl;
        return;
    }
    if(nn*2 <= 6){
        // cout<<" val == less than equall to 6"<<endl;
        if(maxFreq < nn*2){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }else{
        ll totalVal = ((nn*2)-2)/4;
        // cout<<maxFreq<<endl;

        if(maxFreq <= (nn*2-(totalVal)) && ((nn*2)-2)%4 == 0 ){
            cout<<"YES"<<endl;
            return;;
        }
        if(maxFreq <= (nn*2-(totalVal+1))){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
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