#include <bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver()
{

	ll xx, yy;
	cin >> xx >> yy;

	if (xx == yy)
	{
		cout << xx << " " << xx << " " << xx << endl;
		return;
	}

	if(xx == 0 && yy == 0){
		cout<<-1<<" "<<0<<" "<<1<<endl;
	}else if(xx == 0 && yy>0){
		cout<<-(2*yy+1)<<" "<<yy<<" "<<yy+1<<endl;
	}else if(xx>0 && yy == 0){
		cout<<0<<" "<<0<<" "<<3*xx<<endl;
	}else if(xx<0 && yy == 0){
		cout<<(3*xx)<<" "<<0<<" "<<0<<endl;
	}else if(xx == 0 && yy<0){
		cout<<(yy-1)<<" "<<(yy)<<" "<<(2*(((-1)*yy))+1)<<endl;
	}else if(xx<0 && yy>0){
		cout<<3*xx-(2*yy+1)<<" "<<yy<<" "<<yy+1<<endl;
	}else if(xx>0 && yy<0){
		cout<<yy-1<<" "<<yy<<" "<<3*(xx)+2*(-yy)+1<<endl;
	}else
	{
		cout<<(3*xx-yy)-(3*yy-2*xx)<<" "<<yy<<" "<<3*yy-2*xx<<endl;

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