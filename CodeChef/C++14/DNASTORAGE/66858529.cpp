#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < n; i += 2)
        {
            if(s[i] == '0' && s[i+1] == '0'){
                cout<<"A";
            }
            else if(s[i] == '0' && s[i+1] == '1'){
                cout<<"T";
            }
             else if(s[i] == '1' && s[i+1] == '0'){
                cout<<"C";
            }
             else if(s[i] == '1' && s[i+1] == '1'){
                cout<<"G";
            }
        }
        cout<<endl;
        
    
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