#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){

	ll a,b,c;
	cin>>a>>b>>c;

	if(((a+b+c) >= 100) && a>9 && b>9 && c>9){
		cout<<"PASS"<<endl;
	}else{
		cout<<"FAIL"<<endl;
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