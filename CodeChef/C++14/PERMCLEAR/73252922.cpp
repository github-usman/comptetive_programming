#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
	ll nn;
	cin>>nn;

	vector<ll> vv;
	ll xx;
	for (int i = 0; i < nn; i++)
		{
			cin>>xx;
			vv.emplace_back(xx);
		}

	ll mm;
	cin>>mm;
	vector<ll> bb;
	ll yy;
	ll arr[nn+1] = {0};
	for (int i = 0; i <mm ; i++)
		{
			cin>>yy;
			bb.emplace_back(yy);
			arr[yy] = 1;
		}
	for (int i = 0; i < nn; i++)
		{
			if(arr[vv[i]] == 0){
				cout<<vv[i]<<" ";
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