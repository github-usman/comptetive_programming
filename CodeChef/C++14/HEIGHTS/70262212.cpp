#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

	ll n;
	cin >> n;

	vector<ll> vv;
	ll x;
	unordered_map<ll, ll> ump;

	ll maxVal = INT_MIN;
	for (int i = 0; i < n; i++)
	{

		cin >> x;
		maxVal = max(maxVal, x);
		vv.emplace_back(x);
		ump[vv[i]]++;
	}
	ll cnt = 0;

	for (auto x : ump)
	{
		if (x.second >= 2)
		{
			continue;
		}
		else
		{
			cnt++;
		}
	}

	bool flag = false;
	if (cnt == 1)
	{
		for (auto x : ump)
		{
			if (x.first == maxVal && x.second == 1)
			{
				flag = true;
				
			}
			else
			{
				if(x.second>2){
					flag = false;
					break;
				}
			}
		}
	}

	if (flag)
	{
		cout << 2 << endl;
		return;
	}
	if (cnt % 2 == 0)
	{
		cout << cnt / 2 << endl;
	}
	else
	{
		cout << (cnt / 2) + 1 << endl;
	}
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