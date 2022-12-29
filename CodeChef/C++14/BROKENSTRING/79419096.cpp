#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    string ss;
    cin>>ss;

    string s1 = "",s2 = "";

    for (int i = 0; i < nn/2; i++)
        {
            s1 += ss[i];
        }

        for (int i = nn/2; i < nn; i++)
        {
            s2 += ss[i];
        }

    if(s1 == s2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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