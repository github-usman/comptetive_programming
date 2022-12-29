#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    string ss;
    cin>>ss;
    ll cnt = 0;
    for (int i = 0; i < ss.size(); i++)
        {   
            

        
            if(ss[i] == 'a' || ss[i] == 'e' || ss[i] == 'i' || ss[i] == 'o' || ss[i] == 'u'){
                cnt++;
                if(cnt> 2){
                    cout<<"Happy"<<endl;
                    return;
                }
            }else{
                cnt = 0;
            }
        }
        cout<<"Sad"<<endl;
    
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