#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
 
  ll nn;
  cin>>nn;
 
  ll arr[nn+1];
 
  ll minVal = INT_MAX;
  ll maxVal = INT_MIN;
 
  for (int i = 0; i < nn; i++)
      {
          cin>>arr[i];
 
          minVal = min(minVal,arr[i]);
          maxVal = max(maxVal,arr[i]);
      }
 
  for (int i = 0; i < nn; i++)
      {
         if(arr[i] == arr[i+1]){
          continue;
         }else if(arr[i] > arr[i+1]){
          continue;
         }else if(arr[i]<arr[i+1]){
            for (int j = i+1; j <nn-1; j++)
                {
                  if(arr[j] <= arr[j+1] && arr[j] <= maxVal){
                    continue;
                  }else{
                    cout<<"NO"<<endl;
                    return;
                  }
                }
                cout<<"YES"<<endl;
                return;
         }
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