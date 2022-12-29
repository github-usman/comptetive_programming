#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
  ll x,y;
  cin>>x>>y;

  ll maxVal = max(x,y);
  ll minVal = min(x,y);

  ll a = maxVal/10;
  if(maxVal%10 != 0){

    a++;
  }
  ll b = minVal/10;
  if(minVal%10 != 0){
    b++;
  }
  // cout<<a<<" "<<b<<endl;
  
  cout<<(a-b)<<endl;
    
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