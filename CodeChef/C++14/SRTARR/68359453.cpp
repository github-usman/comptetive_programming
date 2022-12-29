#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

	ll n;
	cin >> n;

	string s;
	cin >> s;

	// ll cnt = 0;

	// bool zero = false;
	ll ss = 0, ee = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '1')
		{
			ee = i;
			break;
		}
	}
	// if(ee-ss <= 2){
	// 	cout<<0<<endl;
	// }
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			ss = i;
			break;
		}
	}

	ll cnt = 0;
for (int i = ss; i < n - 1; i++)
		{
			if (s[i] == '1'  && s[i+1] == '0')
			{
				cnt++;
			}
		}


	cout << cnt << endl;
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