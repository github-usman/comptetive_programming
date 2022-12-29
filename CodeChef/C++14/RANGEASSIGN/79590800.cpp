#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    ll arr[nn];

    for (int i = 0; i < nn; i++)
        {
            cin>>arr[i];
        }

    // for the values which is less the 30 array size then print yes alway
    // because we want size should be upto 2 distict
    if(nn<3){
        cout<<"YES"<<endl;
        return;
    }
    if(arr[0] == arr[nn-1] || arr[0] == arr[nn-2] || arr[nn-1] == arr[1]){
        // cout<<"here"<<endl;
        cout<<"YES"<<endl;
        return;
    }

    

    ll st = arr[0];
    ll end = arr[nn-1];


   for (int i = 0; i < nn; i++)
       {
           if(st == arr[i] && end ==  arr[i+1]){
            cout<<"YES"<<endl;
            return;
           }
       }

    // if((st+1 )== end){
    //     cout<<"YES"<<endl;
    //     return;
    // }



    // this is the else condition for the given conditions

    cout<<"NO"<<endl;



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