#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver(){
 
    char arr[9][9];
    for (short i = 1; i <= 8; i++)
        {
            for (short j = 1; j <= 8; j++)
                {
                    cin>>arr[i][j];
                }
            
        }
    for (short i = 1; i <= 8; i++)
        {
            for (short j = 1; j <= 8; j++)
                {
                    if((arr[i][j] == '#') && (arr[i][j+2] == '#')  && ((j+2) <= 8)){
                        cout<<i+1<<" "<<j+1<<endl;
                        return;
                    }
                }
            
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