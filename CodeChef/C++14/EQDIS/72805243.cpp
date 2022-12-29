#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

    ll nn;
    cin>>nn;
    vector<ll> vi;
    set<ll> st;

    
    unordered_map<ll,ll> ump;
    ll xx;
    for (int i = 0; i < nn; i++)
        {
            cin>>xx;
            st.insert(xx);
            vi.emplace_back(xx);
            ump[vi[i]]++;
        }
        // cout<<vi.size()<<endl;
        
    if(st.size()%2 == 0){
      cout<<"YES"<<endl;

      // for(auto it = vi.begin();it != vi.end();it++){
      //   cout<<*it<<" ";
      // }
    }else{
      for(auto x:ump){
        if(x.second >= 2){
          cout<<"YES"<<endl;
          return;
        }
      }
      cout<<"NO"<<endl;
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