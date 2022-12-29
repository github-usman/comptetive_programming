#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
////////////***First Approach***////////////
void driver(){
 
  std::vector<string> v; // Your input vector
    ll nn;
    cin>>nn;
 
    string ss;
    for (int i = 0; i < 3*nn; i++)
        {
            cin>>ss;
            v.emplace_back(ss);
        }
 
    // Count "frequencies"
    std::map<string, int> m;
    for (auto &x : v)
        m[x]++;
 
    // Print output
 
    ll cnt1=0,cnt2=0,cnt3=0;
    ll k = 1;
    
    for (auto x : v){
        // std::cout << m[x] << " ";
        if(m[x] == 1){
            if(k <= nn && k >= 1){
                cnt1 += 3;
            }else if(k <= 2*nn && k >= (nn+1)){
                cnt2 += 3;
            }else  if(k <= 3*nn && k >= (2*nn+1)){
                cnt3 += 3;
            }
        }else if(m[x] == 2){
            if(k <= nn && k >= 1){
                cnt1++;
            }else if(k <= 2*nn && k >= (nn+1)){
                cnt2++;
            }else  if(k <= 3*nn && k >= (2*nn+1)){
                cnt3++;
            }
        }
         
        k++;
    }
        
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
 
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