#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){


        ll nn;
        cin>>nn;

        vector<ll> vv;
        ll xx;
        ll minVal = INT_MAX;
        ll maxVal = INT_MIN;
        for (int i = 0; i < nn; i++)
            {
                cin>>xx;
                vv.emplace_back(xx);
                minVal = min(minVal,xx);
                maxVal = max(maxVal,xx);

                
            }
       sort(vv.begin(),vv.end());
       if(nn == 1){
        cout<<maxVal*minVal<<" "<<maxVal*minVal<<endl;
       }
       else if(maxVal<0 && minVal<0){
        cout<<maxVal*maxVal<<" "<<minVal*minVal<<endl;
       }else if(minVal>0 && maxVal>0){
        cout<<minVal*minVal<<" "<<maxVal*maxVal<<endl;
       } else if(minVal == 0){
        cout<<minVal<<" "<<maxVal*maxVal<<endl;;
       }else if(maxVal == 0){
        cout<<0<<" "<<minVal*minVal<<endl;
       }else if(minVal<0 && maxVal>0){
        cout<<minVal*maxVal<<" "<<max((maxVal*maxVal),(minVal*minVal))<<endl;
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