#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;

    vector<ll> vv;
    ll temp;

    
    unordered_map<ll,ll> ump;
    for (int i = 0; i < nn; i++)
        {
            cin>>temp;
            vv.emplace_back(temp);
            ump[vv[i]]++;
        }
    ll maxVal = *max_element(vv.begin(),vv.end());

    if(maxVal == vv[0]){
      cout<<-1<<endl;
      return;
    }
    for(auto x : ump){
      if(x.second>1){
         cout<<-1<<endl;
         return;
      }
    }

    ll index = 0;
    for (int i = 1; i < nn; i++)
        {
           if(vv[i]>vv[0]){
            index = i;
            break;
           } 
        }
      cout<<index<<endl;
      for (int i = 0; i < index; i++)
          {
              cout<<vv[i]<<" ";
          }
          cout<<endl;
         cout<<nn-index<<endl;
      for (int i = index; i < nn; i++)
          {
              cout<<vv[i]<<" ";
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