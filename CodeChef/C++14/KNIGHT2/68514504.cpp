#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	// knight 
	ll n;
	ll x,y,xx,yy;
	cin>>x>>y>>xx>>yy;

	if((abs(xx-x))%2 == 0 && (abs(yy-y))%2 == 0){
		cout<<"YES"<<endl;
	}else if((abs(xx-x))%2 == 1 && (abs(yy-y))%2 == 1) {
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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