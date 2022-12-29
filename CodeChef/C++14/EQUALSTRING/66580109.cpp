#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
 
 ll n;
 cin>>n;

 string s1,s2;
 cin>>s1>>s2;
// cout<<s2.substr(1,(n-1))<<endl;;
// s2 = s2.substr(1,(n-1));
// cout<<s2<<endl;
ll count = 0;
for (int i = 0; i < n; i++)
    {
        if(s1[i] == s2[i]){
            s2[i] == '0';
        }else{
            if(s2[i] == '1' || s2[i] == '0' ){
                continue;
            }
            char c = s2[i];
            s2[i] = '1';
            int j = i+1;
            while (j<n)
            {
                if(c == s2[j]){
                    s2[j] = '0';
                }
                j++;
            }
            
        }
    }
   for (int i = 0; i < n; i++)
       {
        if(s2[i] == '1'){
            count++;
        }
           
       }
       cout<<count<<endl;
    
 
    
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