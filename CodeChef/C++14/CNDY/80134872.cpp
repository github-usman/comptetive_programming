#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////


void driver(){

	ll nn;
	cin>>nn;

	vector<ll> vv;
	ll temp;
	unordered_map<ll,ll> ump;
	for (int i = 0; i <2*nn; i++)
		{
			cin>>temp;
			vv.emplace_back(temp);
			ump[vv[i]]++;
		}
	
	for(auto x:ump){
		if(x.second>2){
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