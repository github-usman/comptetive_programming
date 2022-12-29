#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll nn,kk;
	cin>>nn>>kk;


	if(nn <((kk*(kk+1))/2)){
		cout<<"NO"<<endl;

	}else{
		cout<<"YES"<<endl;

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