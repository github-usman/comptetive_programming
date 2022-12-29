#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll n;
	cin>>n;

	string s;
	cin>>s;

	string ans = "";
	for (int i = 0; i < n; i++)
		{
			if(s[i] == 'A'){
				ans += 'T';
			}else if(s[i] == 'T'){
				ans += 'A';
			}else if(s[i] == 'C'){
				ans += 'G';
			}else if(s[i] == 'G'){
				ans += 'C';
			}
		}
cout<<ans<<endl;

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