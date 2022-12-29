#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll n,x;
	cin>>n>>x;

	ll rem = n-x;
	if(rem <= 0){
		cout<<0<<endl;
	}else{
		if(rem%4 == 0){
			cout<<rem/4<<endl;
		}else{
			cout<<((rem/4)+1)<<endl;
		}
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