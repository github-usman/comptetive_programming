#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    char a,b;
    cin>>a>>b;


  
    
   if(a == 'R' || b == 'R'){
    cout<<"R"<<endl;
   }else if( a == 'B' || b == 'B'){
    cout<<"B"<<endl;
   }else{
    cout<<"G"<<endl;
   }
}

//////////////***Main Function***//////////////
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--)
    driver();



    return 0;
}