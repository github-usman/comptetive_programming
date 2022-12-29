#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll a,b;
    cin>>a>>b;

    if( a == 0 || b == 0){
        cout<<0<<endl;
    }else if(a == b){
        cout<<1<<endl;
    }
    else if(a%3 == 0 || b%3 ==0){
        cout<<0<<endl;
    }
    else{
        ll ans = abs(a-b);
        ++ans;
        ll maxVal = max(a,b);
        ll minVal = min(a,b);

        ll i = 0;
        ll ans2 = 0;
        while (i<=ans)
        { 
            maxVal = max(maxVal,minVal);
            maxVal = maxVal-minVal;
            ans2++;
            if(maxVal%3 == 0){
                break;
            }else{
                i++;
            }
        }
        cout<<min(ans,ans2)<<endl;
        
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