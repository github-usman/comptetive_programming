#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;

    string ss;
    cin>>ss;


    ll maxVal = -1;
    ll cnt = 0;
    for (int i = 0; i < nn; i++)
        {
            if(ss[i] == '1'){
                cnt++;
            }else{
                break;
            }
        }
       
        cout<<cnt<<endl;
    
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