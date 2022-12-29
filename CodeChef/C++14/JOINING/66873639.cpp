#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    ll n,k;
    cin>>n>>k;

    ll days = (n/5);
    if(n%5 != 0){
        days++;
    }
   
    ll diturbDay = k/5;
    if(k%5 == 0){
       diturbDay = k/5; 
    //    cout<<diturbDay<<" dis"<<endl;
       

    }else{
        //  cout<<diturbDay<<" dis"<<endl;
       diturbDay = k/5;
       ++diturbDay;


    }
    // cout<<days<<" "<<diturbDay<<endl;
     ll ans = days-diturbDay;
     cout<<ans<<endl;
        
    
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