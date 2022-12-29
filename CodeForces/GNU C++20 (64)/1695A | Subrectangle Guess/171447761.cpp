#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll mm,nn;
    cin>>nn>>mm;
 
    ll xx;
    ll ind_i = 0,ind_j = 0;
    ll vv[nn][mm];
    for (int i = 0; i < nn; i++)
        {for (int j = 0; j < mm; j++)
            {
                cin>>vv[i][j];
                if(vv[i][j]>vv[ind_i][ind_j]){
                    ind_i = i;
                    ind_j = j;
                }
                
            }
            
        }
        cout<<max(ind_i+1,nn-ind_i)*max(ind_j+1,mm-ind_j)<<endl;
   
 
//    if(mm <= 2 && nn<= 2){
//     cout<<mm*nn<<endl;
 
//    }else if(mm == nn){
 
//         cout<<((mm/2)+1)*((mm/2)+1)<<endl;
     
//    }else{
//     if(mm == 2 ){
//         cout<<2*((nn/2)+1)<<endl;
//     }else if(nn == 2){
//          cout<<2*((mm/2)+1)<<endl;
//     }else{
//         cout<<((nn/2)+1)*((mm/2)+1)<<endl;
//     }
 
//    }
    
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