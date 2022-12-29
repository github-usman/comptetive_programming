#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    string ss;
    cin>>ss;

    ll cnt = 0;

    for (int i = 0; i < nn/2; i++)
        {
            if(ss[i] != ss[nn-i-1]){
                cnt++;
            }
        }
        // cout<<cnt<<endl;
        if(nn%2 != 0){
            cout<<"YES"<<endl;
        }
        else if(cnt%2 != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
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