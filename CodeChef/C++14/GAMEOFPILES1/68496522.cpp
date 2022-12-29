#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll n;
	cin>>n;

	if(n == 1){
		ll x;
		cin>>x;
		if(x%2 == 0){
			cout<<"CHEFINA"<<endl;
		}else{
			cout<<"CHEF"<<endl;
		}
		return;
	}

	vector<ll> vv;
	bool one = false;
	 unsigned long long int sum = 0;
	for (int i = 0; i < n; i++)
		{
			ll x;
			cin>>x;
			if(x == 1){
				one = true;
			}
			sum += (x-2);
			vv.emplace_back(x);
		}
	if(one){
		cout<<"CHEF"<<endl;
		return;
	}

	if(sum%2 == 0){
		cout<<"CHEFINA"<<endl;
	}else{
		cout<<"CHEF"<<endl;
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