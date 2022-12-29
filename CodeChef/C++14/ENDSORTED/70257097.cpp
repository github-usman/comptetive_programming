#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll n;
	cin>>n;

	vector<ll> arr;
	ll x;
	ll str = 0;
	ll end = 0;
	for (int i = 0; i < n; i++)
		{
			cin>>x;
			arr.emplace_back(x);
			if(x == 1){
				str = i+1;
			}
			if(x == n){
				end = i+1;
			}


			
		}
	ll totalOperation = (str-1) + (n-end);
	if(str>end){
		cout<<(totalOperation-1)<<endl;
	}else{
		cout<<totalOperation<<endl;
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