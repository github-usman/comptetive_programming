#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll n;
	cin>>n;

	vector<ll> vv;
	for (int i = 0; i < n; i++)
		{
			ll x;
			cin>>x;

			vv.emplace_back(x);
			
		}
	unordered_map<ll,ll> ump;
	for (int i = 0; i < n; i++)
		{
			ump[vv[i]]++;
		}	
	
	for(auto x:ump){
		if( x.second%x.first != 0){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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