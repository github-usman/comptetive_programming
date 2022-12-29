#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int

////////////***First Approach***////////////
void driver()
{

	ll maxT, maxN, sumN;
	cin >> maxT >> maxN >> sumN;

	ll maxSumN = sumN * sumN;
	if (sumN % maxN == 0)
	{
		ll divVal = sumN / maxN;
		if (divVal <= maxT)
		{
			cout << divVal * (maxN * maxN) << endl;
		}
		else
		{
			cout << maxT * (maxN * maxN) << endl;
		}
	}
	else
	{
		ll rem = sumN % maxN;
		ll divVal = sumN / maxN;
		ll ans = 0;
		if ((divVal + 1) <= maxT)
		{
			ans += (rem * rem) + divVal * (maxN * maxN);
			cout << ans << endl;
		}
		else
		{
			cout << maxT * (maxN * maxN) << endl;
		}
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