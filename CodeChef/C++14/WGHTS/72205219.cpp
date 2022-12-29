#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////
void driver(){
	ll ww,xx,yy,zz;
	cin>>ww>>xx>>yy>>zz;
	if(ww == xx || ww == yy || ww == zz || ww == (xx+yy) || ww == (zz+yy) || ww == (xx+zz) || ww == (xx+yy+zz)){
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