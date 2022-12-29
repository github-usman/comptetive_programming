#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    vector<ll> a;
    ll lsb = n;
    ll msb = 1;

    bool L = true;
    bool M = false;
    for (int i = 0; i < n; i++)
        {

            if(L){
                a.emplace_back(lsb);
                L = false;
                M = true;
                lsb--;
                continue;;
            }

            if(M){
                a.emplace_back(msb);
                M = false;
                L = true;
                msb++;
                
            }
            
        }
        // cout<<a.size()<<endl;
    for (auto it = a.rbegin();it != a.rend();it++)
        {
           cout<<*it<<" "; 
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