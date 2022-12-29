#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
	ll nn;
	cin >> nn;

	vector<vector<ll>> vD;
	ll val;
	for (int i = 0; i < nn; i++)
	{
		vector<ll> temp;
		ll xx;
		cin >> xx;
		for (int j = 0; j < xx; j++)
		{
			cin >> val;
			temp.emplace_back(val);
		}
		vD.emplace_back(temp);
		temp.clear();
	}
	set<ll> st;
	for (int i = 0; i < vD.size(); i++)
	{
		for (int j = 0; j < vD[i].size(); j++)
		{
			st.insert(vD[i][j]);
		}
		// cout<<endl;
		// method
		set<ll> st2;
		st2 = st;
		for (int l = 0; l< vD.size(); l++)
		{
			st = st2;
			for (int m = 0; m < vD[l].size(); m++)
			{
				st.insert(vD[l][m]);
			}
			if(st.size() == 5){
				cout<<"YES"<<endl;
				return;
			}else{
				st.clear();
			}
		}
		
	}
	cout<<"NO"<<endl;
}

//////////////***Main Function***//////////////
int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
		driver();

	return 0;
}