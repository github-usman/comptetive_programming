#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    ll zero,one;
    cin>>zero>>one;
 
    if(zero>one){
        if(zero>2*one){
            for (int i = 0; i < zero/2; i++)
                {
                   cout<<0; 
                }
            for (int i = 0; i <one; i++)
                {
                   cout<<1 ;
                }
            for (int i = zero/2; i < zero; i++)
                {
                    cout<<0;
                }
        }else{
            ll onesVal = one;
            for (int i = 0; i < (zero+one); i++)
                {
                  if(i%2 != 0 && onesVal>0){
                    cout<<1;
                    onesVal--;
                  } else{
                    cout<<0;
                  } 
                }
            
 
        }
 
 
    }else if(one>zero){
         if(one>2*zero){
            for (int i = 0; i < one/2; i++)
                {
                   cout<<1; 
                }
            for (int i = 0; i <zero; i++)
                {
                   cout<<0 ;
                }
            for (int i = one/2; i < one; i++)
                {
                    cout<<1;
                }
        }else{
            ll zersVal = zero;
            for (int i = 0; i < (zero+one); i++)
                {
                  if(i%2 != 0 && zersVal>0){
                    cout<<0;
                    zersVal--;
                  } else{
                    cout<<1;
                  } 
                }
            
        }
        
    }else{
        for (int i = 0; i < 2*one; i++)
            {
                if(i&1){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }
            
    }
    cout<<endl;
    
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