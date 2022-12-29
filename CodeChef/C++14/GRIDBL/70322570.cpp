#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

  ll n,m;
  cin>>n>>m;

  if(n%2 == 0 && m%2 == 0){
    cout<<0<<endl;
  }else if(n%2 == 1 && m%2 == 0){
    cout<<m<<endl;
  }else if(n%2 == 0 && m%2 == 1){
    cout<<n<<endl;
  }else{
    cout<<n+(m-1)<<endl;
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