#include<bits/stdc++.h>
using namespace std;

#define ll long long int



////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

   
    ll arr[nn];

    ll cntOne = 0;

    ll minVal = INT_MAX;
    for (int i = 0; i < nn; i++)
        {
           cin>>arr[i]; 
           if(arr[i] == 1){
            cntOne++;
           }
           minVal = min(arr[i],minVal);
        }

    ll first = arr[0];
    bool allEqual = true;
    for (int i = 0; i < nn; i++)
        {
            if(arr[i] == first){
                continue;
            }else{
                allEqual = false;
                break;
            }
                
            
        }
    
    if(allEqual){
        cout<<0<<endl;
    return;
    }

    if(cntOne>0){
        cout<<nn-cntOne<<endl;
        return;
    }   

    ll allDivi = true;

    ll cntMinVal = 0;
    // cout<<minVal<<" = minal"<<endl;
    for (int i = 0; i < nn; i++)
        {
          if((arr[i]%minVal) == 0){
            if(minVal == arr[i]){
                cntMinVal++;
            }
            continue;
          }else{
            allDivi = false;
          }
        }
    if(allDivi){
        cout<<nn-cntMinVal<<endl;
        return;
    }
        

    cout<<nn<<endl;
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