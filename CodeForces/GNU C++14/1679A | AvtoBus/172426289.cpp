#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll nn;
    cin>>nn;
 
    if(nn&1){
        cout<<-1<<endl;
    }else if(nn<4){
        cout<<-1<<endl;
    }else {
         nn = nn/2;
        ll max = 0;
        ll min = 0;
        if(nn%2 == 0 && nn%3 == 0){
            max = nn/2;
            min = nn/3;
 
            cout<<min<<" "<<max<<endl;
        }else if(nn%2 != 0 && nn%3 == 0){
            max = nn/2;
            max = max+1;
            min = nn/3;
            cout<<min<<" "<<((nn-3)/2)+1<<endl;
        }else if(nn%2 == 0 && nn%3 != 0){
            if(nn%3 == 1){
                min = ((nn-2)/3)+2;
            }else if(nn%3 == 2){
                min = (nn/3)+1;
            }
            cout<<min<<" "<<nn/2<<endl;
        }else{
 
 
            if(nn%3 == 1){
                min = ((nn-2)/3)+2;
            }else if(nn%3 == 2){
                min = (nn/3)+1;
               
            }
             cout<<min<<" "<<((nn-3)/2)+1<<endl;
            
        }
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