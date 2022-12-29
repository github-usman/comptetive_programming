#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    float a,b,c;
    cin>>a>>b>>c;
    if((float)((a+b)/2) > c){
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