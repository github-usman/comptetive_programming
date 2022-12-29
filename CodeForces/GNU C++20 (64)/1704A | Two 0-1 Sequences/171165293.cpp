#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
////////////***First Approach***////////////
void driver()
{
 
  int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
       
        bool same = true;
        for (int i = 1; i < b.size(); ++i) {
            if (a[i + n - m] != b[i]) {
                same = false;
                break;
            }
        }
        if (!same) {
            cout << "NO\n";
          return;
        }
        for (int i = 0; i < n - m + 1; ++i) {
            if (a[i] == b[0]) {
                same = false;
            }
        }
        if (same) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
}
 
 //////////////***Main Function***//////////////
 int32_t main()
 {
 
  // ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
  int t;
  cin >> t;
 
  while (t--)
   driver();
 
  return 0;
 }