#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    string ss;
    getline(cin,ss);
    
    cout<<"Boxes to be filled are: ";
    ll zero = 0;
    for (ll  i = 0; i < ss.size(); i++)
        {   
            if(ss[i] == '0' || ss[i] == '1'){
                zero++;
            }
           if(ss[i] == '0'){
                cout<<zero<<" ";
           } 
        }
    
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--)
    driver();



    return 0;
}