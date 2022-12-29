#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
	ll nn;
	cin>>nn;

	if(nn%2 == 0){
		ll val = nn/2;
		cout<<(2*(val)*val)<<endl;
	}else{
		ll val = nn/2;
		cout<<2*((val+1)*val)<<endl;
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