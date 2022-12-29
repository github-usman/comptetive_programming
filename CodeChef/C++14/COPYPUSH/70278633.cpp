#include<bits/stdc++.h>
using namespace std;

#define ll long long int

////////////***First Approach***////////////

void selfString(string s, ll n){
	string r1 ="";
	string r2 = "";
	while(n){
		// if(n == 0){
		// 	cout<<"YES"<<endl;
		// 	return;
		// }

		if(n&1){
			// cout<<s<<" s= "<<endl;
			s = s.substr(0,n-1);
			// cout<<s<<endl;

			n--;
		}else{
			r1 = s.substr(0,n/2);
			r2 = s.substr(n/2,n/2);
			// cout<<r1<<" "<<r2<<" "<<endl;
			s = s.substr(0,n/2);
			// if()
			// cout<<s<<endl;
			if(r1 == r2){
				n /= 2;
			}else{
				cout<<"NO"<<endl;
				break;
			}
			

		}
		if(n == 0){
			cout<<"YES"<<endl;
			return;
		}
	}
}
void driver(){

	ll n;
	cin>>n;
	string s;
	cin>>s;
	selfString(s,n);



	


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