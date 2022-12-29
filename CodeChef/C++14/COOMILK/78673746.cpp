#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    bool follow = true;

    string ss; 

    bool local = true;
    for (int i = 0; i < nn; i++)
        {
           cin>>ss;

           if(local == false && ss == "cookie"){
            follow = false;
           }
            if(ss == "cookie"){
                local = false;
            }else{
                local = true;
            }
            
        }

        if(local == false || follow == false){
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