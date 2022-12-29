#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll n;
    cin>>n;

    string s;
    cin>>s;

    bool alreadyPalindrome = true;

    for (int i = 0; i < n; i++)
        {
            if(s[i] == s[n-(i+1)]){
                continue;
            }else{
                alreadyPalindrome = false;
            }
        }
    if(alreadyPalindrome){
        cout<<s<<endl;
        return;
    }
    ll ones = 0;
    for (int i = 0; i < n; i++)
        {
            if(s[i] == '1'){
                ones++;
            }
        }
    ll zeros = n-ones;
    if(ones > zeros){
        while (ones--)
        {
            cout<<"1";
        }
        cout<<endl;
        
    }else{
        while (zeros--)
        {
            cout<<"0";
        }
        cout<<endl;
        
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