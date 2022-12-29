#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
	ll n;
	cin>>n;

	vector<ll> vec;
	set<ll> st;

	for (int i = 0; i < n; i++)
		{
			ll x;
			cin>>x;

			st.insert(x);

			vec.emplace_back(x);
			
		}
	if(st.size() == 1){
		cout<<0<<endl;
		return;
	}


	// Define an map
	map<ll, ll> M;

	// Traverse vector vec check if
	// current element is present
	// or not
	for (auto i = 0; i<n; i++)
	{

		// If the current element
		// is not found then insert
		// current element with
		// frequency 1
		if (M.find(vec[i]) == M.end())
		{
			M[vec[i]] = 1;
		}

		// Else update the frequency
		else
		{
			M[vec[i]]++;
		}
	}

	// Traverse the map to print the
	// frequency
	ll maxVal = 1;
	for (auto it = M.begin();it != M.end(); it++)
	{
		ll freq = it->second ;
		maxVal = max(maxVal,freq);
	}
	cout<<n-maxVal<<endl;
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