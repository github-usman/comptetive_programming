#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
    
    float n;
    cin>>n;

    float ans = pow((0.143*n),n);
    
    ll intVal = ans;
    float fVal = ans-intVal;
    if(fVal<0.49999999999999999999){
        cout<<intVal<<endl;
    }else{
        cout<<++intVal<<endl;
        
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