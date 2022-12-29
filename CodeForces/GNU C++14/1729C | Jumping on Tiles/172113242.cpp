#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 
    string ss;
    cin>>ss;
    ll nn = ss.size();
    ll startString = ss[0]-'0'-48,endString = ss[nn-1]-'0'-48;
    // cout<<startString<<" "<<endString<<endl;
 
    vector<pair<ll,ll>> vmap;
 
    ll maxVal = max(startString,endString);
    ll minVal = min(startString,endString);
 
    for (int i = 0; i < nn; i++)
        {
           if(minVal <= (ss[i]-'0'-48) && (ss[i]-'0'-48) <= maxVal){
            vmap.emplace_back(make_pair((ss[i]-'0'-48),i+1));
           }else{
            continue;
           } 
        }
    sort(vmap.begin(),vmap.end());
    ll totalCost = 0;
       for (int i = 0; i < vmap.size()-1; i++)
        {
          
           totalCost += abs(vmap[i].first-vmap[i+1].first);
        }
   cout<<totalCost<<" "<<vmap.size()<<endl;
    for (int i = 0; i < vmap.size(); i++)
        {
          
            if(vmap[i].second == 1){
                break;
            }
            if(vmap[i].second == ss.size()){
                reverse(vmap.begin(),vmap.end());
                break;
            }
        }
    cout<<1<<" ";
    
       for (int i = 0; i < vmap.size(); i++)
        {
            if(vmap[i].second == 1 || vmap[i].second == nn){
                continue;
            }
            cout<<vmap[i].second<<" ";
         
        }
        // cout<<endl;
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