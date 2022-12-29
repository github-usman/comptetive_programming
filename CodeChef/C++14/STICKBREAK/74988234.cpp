#include<bits/stdc++.h>
using namespace std;



////////////***First Approach***////////////
void driver(){

    int length,kk;
    cin>>length>>kk;

    int segment = length/kk;
    int rem = length-(segment*kk);

    // int arr[kk+1] = {0};
    // int temp;
  
    
   if(rem>0){
    cout<<1<<endl;
   }else{
    cout<<0<<endl;
   }
    // cout<<ans<<endl;
    
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