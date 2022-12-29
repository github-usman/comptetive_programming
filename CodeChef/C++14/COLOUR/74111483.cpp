#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll arr[4];
    for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);

       if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0){
        cout<<0<<endl;
       }else if(arr[0] == 0 && arr[1] == 0 && arr[2] != 0){
        cout<<1<<endl;
       }else if(arr[0] == 0 && arr[1] != 0 && arr[2] != 0){
            if(arr[1] == 1 && arr[2] == 1){
                cout<<2<<endl;
            }else if(arr[1] == 1 && arr[2] >= 2){
                cout<<2<<endl;
            }else{
                cout<<3<<endl;
            }
       }else{
            if(arr[0] == 1 && arr[1] == 1 && arr[2] == 1){
                cout<<3<<endl;
            }else if(arr[0] == 1 && arr[1] == 1 && arr[2] >= 1){
                cout<<3<<endl;
            }else if(arr[0] == 1 && arr[1] == 2 && arr[2] == 2){
                cout<<4<<endl;
            }else if(arr[0] == 2 && arr[1] == 2 && arr[2] == 2){
                cout<<4<<endl;
            }else if(arr[0] == 1 && arr[1] >= 2 && arr[2] >= 2){
                cout<<4<<endl;
            }else if(arr[0] == 2 && arr[1] >= 2 && arr[2] >= 3){
                cout<<5<<endl;
            }else {
                cout<<6<<endl;
            }
       }
    // cout<<endl;
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