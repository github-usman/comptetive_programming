#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{
	ll nn;
	cin >> nn;

	vector<ll> viA;
	vector<ll> viB;
	ll xx;
	ll sumA = 0, sumB = 0;
	for (int i = 0; i < nn; i++)
	{
		cin >> xx;
		viA.emplace_back(xx);
		sumA += xx;
	}

	for (int i = 0; i < nn; i++)
	{
		cin >> xx;
		viB.emplace_back(xx);
		sumB += xx;
	}

	if(sumA != sumB){
		cout<<-1<<endl;
		return;
	}
	ll sumAns = 0;
	for (int i = 0; i <  nn; i++)
		{
			sumAns += abs(viA[i]-viB[i]);
			
		}
	cout<<sumAns/2<<endl;
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