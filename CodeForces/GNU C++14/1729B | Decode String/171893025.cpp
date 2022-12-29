#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
    ll nn;
    cin>>nn;
    string ss;
    cin>>ss;
 
    string ans = "";
    for (int i = (nn-1); i >= 0; i--)
        {
            if(ss[i] == '0'){
                ll sc = (ss[i-2]-48)*10+(ss[i-1]-48);
                char a = (char(sc+96));
                // cout<<(char(sc+96))<<endl;
                ans = ans+a;
                i = i-2;
            }else{
                ll sc = (ss[i]-48);
                char a = (char(sc+96));
                ans = ans+a;
                // cout<<(char(sc+96))<<endl;
                // cout<<char(sc+96)<<endl;
            }
        }
        for (int i = ans.size()-1; i>=0; i--)
            {
                cout<<ans[i];
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