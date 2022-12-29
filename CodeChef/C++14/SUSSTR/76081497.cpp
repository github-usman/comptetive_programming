#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;


    // deque<char> ds;

    string ss;
    cin>>ss;

    // for (int i = 0; i < nn; i++)
    //     {
    //        ds.emplace_back(ss[i]); 
    //     }

    string emptyT = "";
    ll k = 0;
    for (int i = 0; i < nn; i++)
        {
            if(i&1){
                char newds = ss[nn-k-1];
                if(newds == '0'){
                    emptyT = emptyT + newds;
                }else{
                     emptyT =  newds+emptyT ;
                }
                k++;
                
            }else{
                 char newds = ss[k];
                // ds.pop_front();
                if(newds == '1'){
                    emptyT = emptyT + newds;
                }else{
                     emptyT =  newds+emptyT ;
                }
            }
        }
        cout<<emptyT<<endl;
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