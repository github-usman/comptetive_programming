#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

        ll n,x;
        cin>>n>>x;

        string s;
        cin>>s;
        
    

        ll cnt = 0;
        for (int i = 0; i < n/2; i++)
            {
                if(s[i] != s[n-(i+1)]){
                    cnt++;
                    // cout<<s[i]<<" "<<s[n-i]<<endl;
                }
                
            }
            // cout<<cnt<<endl;
        bool flag = false;
        if(n%2 != 0){
            flag = true;
        }
        if(cnt <= x && flag == true){
            cout<<"YES"<<endl;
        }else if(cnt == x || (((x-cnt)%2 == 0) && x>cnt)){
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