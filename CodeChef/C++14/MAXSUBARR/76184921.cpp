#include<bits/stdc++.h>
using namespace std;
#define lli long long

lli maxSubArraySum(vector<lli> a, int n)
{
    lli max_tot = INT_MIN, m = 0;
 
    for (int i = 0; i < n; i++) {
        m = m + a[i];
        if (max_tot < m)
            max_tot = m;
 
        if (m < 0)
            m = 0;
    }
    return max_tot;
}

int main(){

    // freopen("output.txt","r",stdin);
    // freopen("output1.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        vector<lli> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>m;
        vector<lli> b(m);
        lli p=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]>0)p+=b[i];
        }
        long long maxx;

        a.insert(a.begin(),p);
        maxx=maxSubArraySum(a,n+1);
        a.erase(a.begin(),a.begin()+1);
        a.insert(a.begin()+n,p);
        maxx=max(maxx,maxSubArraySum(a,n+1));
        cout<<maxx<<endl;
    } 
}