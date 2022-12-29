#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
	ll xx,yy;
	cin>>xx>>yy;

	if(xx>yy){
		cout<<"NEW PHONE"<<endl;
	}else if( xx == yy){
		cout<<"ANY"<<endl;
	}else{
		cout<<"REPAIR"<<endl;
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