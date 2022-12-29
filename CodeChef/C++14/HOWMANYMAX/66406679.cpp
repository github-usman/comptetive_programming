#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll n;
    cin>>n;

    string s;
    cin>>s;
    if(n==2){
        cout<<1<<endl;
        return;
    }
    ll count = 0;
    char first = s[0];
    char preChar = first;

    // fisrt == 1 count 1;

    if(first == '1'){
        count++;
    }
    for (int i = 1; i < n; i++)
        {
            if(s[i] == '1' && preChar == '0'){
                preChar = '1';
                count++;
            }else if(s[i] == '0'){
                preChar = '0';
                continue;
            }else if(s[i] == '1' && preChar == '1'){
                continue;
            }
        }
    if(s[n-2] == '0'){
        count++;
    }
    cout<<count<<endl;
    
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