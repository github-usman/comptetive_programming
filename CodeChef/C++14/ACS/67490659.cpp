#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
	ll n;
	cin>>n;

	ll rem = n%100;
	ll div = n/100;

	if(n<0 || (rem+div)>10){
		cout<<-1<<endl;
	}else{
		cout<<rem+div<<endl;
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