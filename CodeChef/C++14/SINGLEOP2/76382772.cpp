#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;

    string ss;
    cin>>ss;


    // ll maxVal = -1;
    ll cnt = 0;
    for (int i = 1; i < nn; i++)
        {
            if(ss[i] == '1'){
                cout<<i<<endl;
                return;
            }
        }


      
        cout<<ss.size()<<endl;
    
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