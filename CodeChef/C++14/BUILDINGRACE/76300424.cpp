#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    double aa,bb,xx,yy;
    cin>>aa>>bb>>xx>>yy;

    double chef = aa/xx,fe = bb/yy;
    if(chef<fe){
        cout<<"Chef"<<endl;
    }else if(chef>fe){
        cout<<"Chefina"<<endl;
    }else{
        cout<<"Both"<<endl;
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