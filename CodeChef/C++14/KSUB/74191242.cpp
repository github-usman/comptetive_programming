#include <bits/stdc++.h>
using namespace std;

#define ll long long int


////////////***First Approach***////////////
void driver()
{
    ll n, k;
    cin >> n >> k;
    ll vv[n];

//    public: 
//       void push(T const&);  // push element 
//       void pop();               // pop element 
//       T top() const;            // return top element 
      
//       bool empty() const {      // return true if empty.
//          return elems.empty(); 
//       } 
// }; 
    // ll n, k;
    // cin >> n >> k;
    // ll vv[n];
    ll xx;
    for (int i = 1; i <= n; ++i)
    {
        cin >> vv[i];
    }
    //  ll transfer, start;
    // ll cnt = transfer = vv[1];
    // start = 0;
    // for (int i = 2; i <= n; ++i)
    //     cnt = __gcd(cnt, vv[i]);
    // for (int i = 2; i <= n; ++i)
    // {
    //     if (transfer == cnt)
    //     {
    //         transfer = vv[i];
    ll transfer, start;
    ll cnt = transfer = vv[1];
    start = 0;
    for (int i = 2; i <= n; ++i)
        cnt = __gcd(cnt, vv[i]);
    for (int i = 2; i <= n; ++i)
    {
        if (transfer == cnt)
        {
            transfer = vv[i];
            start++;
        }
        transfer = __gcd(transfer, vv[i]);
    }
     if((start + (transfer == cnt)) >= k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

//////////////***Main Function***//////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int transfer;
    cin >> transfer;

    while (transfer--)
        driver();

    return 0;
}