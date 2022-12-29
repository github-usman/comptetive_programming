#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	 int x, y, z;
        cin >> x >> y >> z;
        long long ans = 1;
        for(int i = 0; i < 20; i++) {
            int cnt = ((x&(1<<i)) > 0);
            cnt += ((y&(1<<i)) > 0);
            cnt += ((z&(1<<i)) > 0);
            if(cnt == 1) ans = 0;
            else if(cnt == 3) ans *= 4;
        }
        cout << ans << "\n";
	
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